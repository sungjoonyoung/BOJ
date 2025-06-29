#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int h, m;
	cin >> h >> m;
	h = h * 60 + m + 60 * 24 - 45;
	h %= 60 * 24;
	cout << h / 60 << " " << h%60;
}