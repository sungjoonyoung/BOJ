#include<iostream>
using namespace std;
int DP[1001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	DP[1] = 1; DP[2] = 2;
	for (int i = 3; i < 1001; i++)DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	int tmp; cin >> tmp; cout << DP[tmp];
}