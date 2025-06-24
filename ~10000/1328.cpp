#include<iostream>
using namespace std;
long long dp[101][102][102];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, L, R;
	cin >> N >> L >> R;
	dp[1][1][1] = 1;
	for (int n = 2; n <= N; n++)for (int i = 1; i <= L; i++)for (int j = 1; j <= R; j++) {
		dp[n][i][j] = (dp[n - 1][i - 1][j] + dp[n - 1][i][j - 1] + dp[n - 1][i][j] * (n - 2))% 1000000007;
	}
	cout << dp[N][L][R];
}