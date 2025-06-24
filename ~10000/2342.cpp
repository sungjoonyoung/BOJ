#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int dp[100002][5][5];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++) dp[n][i][j] = INT_MAX;
	dp[n][0][0] = 0;
	for (n = 1;; n++) {
		int in;
		cin >> in;
		if (in == 0)break;
		for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++) dp[n][i][j] = INT_MAX;
		for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++) {
			if (dp[n - 1][i][j] == INT_MAX)continue;
			if (i == in)dp[n][in][j] = min({ dp[n][in][j] ,dp[n - 1][i][j] + 1 });
			else if (i == 0)dp[n][in][j] = min({ dp[n][in][j] ,dp[n - 1][i][j] + 2 });
			else if (min(i, in) + 2 == max(i, in))dp[n][in][j] = min({ dp[n][in][j] ,dp[n - 1][i][j] + 4 });
			else dp[n][in][j] = min({ dp[n][in][j] ,dp[n - 1][i][j] + 3 });
		}
		for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++) {
			if (dp[n - 1][i][j] == INT_MAX)continue;
			if (i == in)dp[n][j][in] = min({ dp[n][j][in] ,dp[n - 1][j][i] + 1 });
			else if (i == 0)dp[n][j][in] = min({ dp[n][j][in] ,dp[n - 1][j][i] + 2 });
			else if (min(i, in) + 2 == max(i, in))dp[n][j][in] = min({ dp[n][j][in] ,dp[n - 1][j][i] + 4 });
			else dp[n][j][in] = min({ dp[n][j][in] ,dp[n - 1][j][i] + 3 });
		}
	}
	int answer = INT_MAX;
	for (int i = 0; i < 5; i++)for (int j = 0; j < 5; j++) {
		answer = min(dp[n-1][i][j], answer);
	}
	cout << answer;
}