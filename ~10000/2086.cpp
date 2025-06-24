#include<iostream>
using namespace std;
long long answer[4] = { 1,0,1,0 };
long long tmp[4] = { 1,1,1,0 };
void dou(void);
void tmpd(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> b >> a;
	//F_a+2 - F_a+1
	a += 2;
	b += 1;
	while (a) {
		if (a % 2) {
			tmpd();
			dou();
			a /= 2;
		}
		else {
			dou();
			a /= 2;
		}
	}
	long long out = 0;
	out += answer[3]+ 10000000000;
	answer[0] = 1;
	answer[1] = 0;
	answer[2] = 1;
	answer[3] = 0;
	tmp[0] = 1;
	tmp[1] = 1;
	tmp[2] = 1;
	tmp[3] = 0;
	while (b) {
		if (b % 2) {
			tmpd();
			dou();
			b /= 2;
		}
		else {
			dou();
			b /= 2;
		}
	}
	out -= answer[3];
	cout << out% 1000000000;
}
void dou(void) {
	//tmp*tmp
	long long lu = tmp[0] * tmp[0] % 1000000000 + tmp[1] * tmp[2] % 1000000000;
	long long ru = tmp[0] * tmp[1] % 1000000000 + tmp[1] * tmp[3] % 1000000000;
	long long ld = tmp[2] * tmp[0] % 1000000000 + tmp[3] * tmp[2] % 1000000000;
	long long rd = tmp[2] * tmp[1] % 1000000000 + tmp[3] * tmp[3] % 1000000000;
	tmp[0] = lu % 1000000000;
	tmp[1] = ru % 1000000000;
	tmp[2] = ld % 1000000000;
	tmp[3] = rd % 1000000000;
}
void tmpd(void) {
	//ans*tmp
	long long lu = answer[0] * tmp[0] % 1000000000 + answer[1] * tmp[2] % 1000000000;
	long long ru = answer[0] * tmp[1] % 1000000000 + answer[1] * tmp[3] % 1000000000;
	long long ld = answer[2] * tmp[0] % 1000000000 + answer[3] * tmp[2] % 1000000000;
	long long rd = answer[2] * tmp[1] % 1000000000 + answer[3] * tmp[3] % 1000000000;
	answer[0] = lu % 1000000000;
	answer[1] = ru % 1000000000;
	answer[2] = ld % 1000000000;
	answer[3] = rd % 1000000000;
}