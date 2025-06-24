#include<iostream>
using namespace std;
int arr[10000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	for (int i = 1; i <= A; i++)for (int j = 1; j <= B; j++)for (int k = 1; k <= C; k++) {
		arr[i + j + k]++;
	}
	int maxnum = 0;
	int answer = -1;
	for (int i = 0; i < 10000; i++)if (arr[i] > maxnum) {
		maxnum = arr[i];
		answer = i;
	}
	cout << answer;
}