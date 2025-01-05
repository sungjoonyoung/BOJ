#include<iostream>
using namespace std;
long long dp[2][91];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[1][1] = 1;
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		dp[0][i] = dp[0][i - 1] + dp[1][i - 1];
		dp[1][i] = dp[0][i - 1];
	}
	cout << dp[0][N] + dp[1][N];
}