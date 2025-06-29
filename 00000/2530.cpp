#include<iostream>
#define H 3600
#define M 60
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int h, m, s;
	cin >> h >> m >> s;
	int in;
	cin >> in;
	in += h * H + m * M + s;
	in %= 24 * H;
	cout << in / H<<" ";
	in %= H;
	cout << in / M<<" ";
	in %= M;
	cout << in;
}