#include<iostream>
using namespace std;
int map[501][500];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)for (int j = 0; j < i; j++)cin >> map[i][j];

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (j == 0)map[i][j] += map[i - 1][j];
			else if (j == i - 1)map[i][j] += map[i - 1][j-1];
			else map[i][j] += max(map[i - 1][j - 1], map[i - 1][j]);
		}
	}
	int answer = -10000000;
	for (int i = 0; i < n; i++) answer = max(answer, map[n][i]);
	cout << answer;
}