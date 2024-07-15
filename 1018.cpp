#include <iostream>
#include <string>
using namespace std;

char arr1[50][50];
char arr2[50][50];
int arrsum1[51][51];
int arrsum2[51][51];


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 50; i = i + 2) {
		for (int j = 0; j < 50; j = j + 2) arr1[i][j] = 1;
	}
	for (int i = 1; i < 50; i = i + 2) {
		for (int j = 1; j < 50; j = j + 2) arr1[i][j] = 1;
	}
	for (int i = 0; i < 50; i = i + 2) {
		for (int j = 1; j < 50; j = j + 2) arr2[i][j] = 1;
	}
	for (int i = 1; i < 50; i = i + 2) {
		for (int j = 0; j < 50; j = j + 2) arr2[i][j] = 1;
	}
	int kkk = 50;

	int N, M, count, sum1, sum2;
	char tmp;
	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		count = 0;
		sum1 = 0;
		sum2 = 0;
		for (auto c : str) {
			if (c == 'B') tmp = 1;
			else tmp = 0;
			if (arr1[i][count] == tmp) {
				sum1++;
				arrsum1[i][count + 1] = sum1;
			}
			else arrsum1[i][count + 1] = sum1;
			if (arr2[i][count] == tmp) {
				sum2++;
				arrsum2[i][count + 1] = sum2;
			}
			else arrsum2[i][count + 1] = sum2;
			count++;
		}
	}

	sum1 = 0;
	sum2 = 0;
	int min = 100000;

	for (int i = 8; i < M + 1; i++) {
		sum1 = 0;
		sum2 = 0;
		for (int j = 0; j + 7 < N; j++) {

			sum1 = arrsum1[j][i] + arrsum1[j + 1][i] + arrsum1[j + 2][i] + arrsum1[j + 3][i] + arrsum1[j + 4][i] + arrsum1[j + 5][i] + arrsum1[j + 6][i] + arrsum1[j + 7][i];
			sum1 -= arrsum1[j][i - 8] + arrsum1[j + 1][i - 8] + arrsum1[j + 2][i - 8] + arrsum1[j + 3][i - 8] + arrsum1[j + 4][i - 8] + arrsum1[j + 5][i - 8] + arrsum1[j + 6][i - 8] + arrsum1[j + 7][i - 8];
			if (64 - sum1 < min)min = 64 - sum1;
		}
		for (int j = 0; j + 7 < N; j++) {

			sum2 = arrsum2[j][i] + arrsum2[j + 1][i] + arrsum2[j + 2][i] + arrsum2[j + 3][i] + arrsum2[j + 4][i] + arrsum2[j + 5][i] + arrsum2[j + 6][i] + arrsum2[j + 7][i];
			sum2 -= arrsum2[j][i - 8] + arrsum2[j + 1][i - 8] + arrsum2[j + 2][i - 8] + arrsum2[j + 3][i - 8] + arrsum2[j + 4][i - 8] + arrsum2[j + 5][i - 8] + arrsum2[j + 6][i - 8] + arrsum2[j + 7][i - 8];
			if (64 - sum2 < min)min = 64 - sum2;
		}


	}
	cout << min;
}