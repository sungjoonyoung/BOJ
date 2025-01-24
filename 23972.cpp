#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long K, N;
	cin >> K >> N;
	if (N == 1)cout << -1;
	//else if (K == N)cout << N + 1;
	else cout << K * N / (N - 1) + (((K * N) % (N - 1)) ? 1 : 0);
}