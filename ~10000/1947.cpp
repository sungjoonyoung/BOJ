#include<iostream>
using namespace std;
long long dp[1'000'001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= N; i++)dp[i] = (dp[i - 1] * (i - 1) % 1'000'000'000 + dp[i - 2] * (i - 1) % 1'000'000'000)% 1'000'000'000;
	cout << dp[N] % 1'000'000'000;
}