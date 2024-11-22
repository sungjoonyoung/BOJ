#include<iostream>
using namespace std;
int dp[17][16][65536];
int map[16][16];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) cin >> map[i][j];
	for (int i = 0; i < N; i++) {
		if (map[0][i])dp[1][i][(1 << i) | 1] = map[0][i];
	}
	for (int i = 1; i < N-1; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (!map[j][k])continue;
				for (int b = 1; b < (1 << N); b++) {
					if (b == (b | (1 << k)))continue;
					if (!dp[i][j][b])continue;
					if(!dp[i + 1][k][b | (1 << k)])dp[i + 1][k][b | (1 << k)] = dp[i][j][b] + map[j][k];
					else dp[i + 1][k][b | (1 << k)] = min(dp[i + 1][k][b | (1 << k)], dp[i][j][b] + map[j][k]);
				}
			}
		}
	}
	int minnum = 17*1000000;
	for (int i = 1; i < N; i++) {
		if (map[i][0] and dp[N - 1][i][(1 << N) - 1])minnum = min(minnum, dp[N - 1][i][(1 << N) - 1] + map[i][0]);
	}
	cout << minnum;
}