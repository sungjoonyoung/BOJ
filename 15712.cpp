#include<iostream>
using namespace std;
int a, r, n, mod;
long long pow(long long x, long long y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> r >> n >> mod;
	//r /= mod;
	long long answer = 0;
	long long tmp = 1;
	while (n) {
		if (n % 2) {
			answer += tmp * pow(r, n - 1);
			answer %= mod;
			tmp *= (1 + pow(r, n / 2 ));
			tmp %= mod;
			n /= 2;
		}
		else {
			tmp *= (1 + pow(r, n/2));
			tmp %= mod;
			n /= 2;
		}
	}
	//cout << tmp << " ";
	cout << (answer * a) % mod;
}
long long pow(long long x, long long y) {
	long long answer = 1;
	long long tmp = x;
	while(y) {
		if (y % 2) {
			answer *= tmp;
			answer %= mod;
			tmp *= tmp;
			tmp %= mod;
			y /= 2;
		}
		else {
			tmp *= tmp;
			tmp %= mod;
			y /= 2;
		}
	}
	return (answer % mod);
}