#include<iostream>
using namespace std;
long long N, K;
long long func(long long x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> K;
	long long ind1 = 0, ind2 = N * N;
	while (ind1+1!=ind2) {
		long long tmp = (ind1 + ind2) / 2;
		long long f = func(tmp);
		if (f >= K)ind2 = tmp;
		else ind1 = tmp;
	}
	cout << ind2;
}
long long func(long long x) {
	long long out = 0;
	for (long long i = 1; i <= N; i++) {
		out += min(N, x / i);
	}
	return out;
}