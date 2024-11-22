#include<iostream>
using namespace std;
long long arr[11][101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= 9; i++)arr[i][1]++;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j != 0)arr[j - 1][i + 1] += arr[j][i] % 1000000000;
			if (j != 9)arr[j + 1][i + 1] += arr[j][i] % 1000000000;
		}
	}
	long long answer = 0;
	for (int i = 0; i <= 9; i++) {
		answer += arr[i][N] % 1000000000;
		answer %= 1000000000;
	}
	cout << answer;
}