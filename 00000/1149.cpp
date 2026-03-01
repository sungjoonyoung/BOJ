//1149
//1초 1억번!
#include<iostream>
#include<algorithm>
using namespace std;
int arr[1005][3];
int dp[1005][3];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		dp[i][0] = arr[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = arr[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = arr[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	cout << min({ dp[N][0] ,dp[N][1] ,dp[N][2] });
}