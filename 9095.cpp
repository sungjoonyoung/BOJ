#include<iostream>
using namespace std;

int DP[11];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;
	for (int i = 4; i < 11; i++)DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
	while (N--) {
		int tmp;
		cin >> tmp;
		cout << DP[tmp]<<"\n";
	}
}