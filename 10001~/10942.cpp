#include<iostream>
using namespace std;
int inarr[2001];
int dp[4002];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> inarr[i];
	for (int i = 1; i <= 2*N; i++) {
		if(i%2==0)for (int j = 0; ; j++) {
			if (i / 2 - j == 0 or i / 2 + j == N + 1) break;
			if (inarr[i / 2 - j] == inarr[i / 2 + j])dp[i]++;
			else break;
		}
		else for (int j = 0; ; j++) {
			if (i / 2 - j == 0 or i / 2 + 1 + j == N + 1) break;
			if (inarr[i / 2 - j] == inarr[i / 2 + 1 + j])dp[i]++;
			else break;
		}
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		if (dp[a + b] >= (b - a) / 2 + 1)cout << "1\n";
		else cout << "0\n";
	}
}