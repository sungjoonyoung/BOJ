#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long now=0;
	long long start=0;
	char h10, h1, c, m10, m1, s10, s1;
	cin >> h10 >> h1 >> c >> m10 >> m1 >> c >> s10 >> s1;
	now += (long long)(h10 - '0') * 60 * 60 * 10;
	now += (long long)(h1 - '0') * 60 * 60;
	now += (long long)(m10 - '0') * 60 * 10;
	now += (long long)(m1 - '0') * 60;
	now += (long long)(s10 - '0') * 10;
	now += (long long)(s1 - '0');
	cin >> h10 >> h1 >> c >> m10 >> m1 >> c >> s10 >> s1;
	start += (long long)(h10 - '0') * 60 * 60 * 10;
	start += (long long)(h1 - '0') * 60 * 60;
	start += (long long)(m10 - '0') * 60 * 10;
	start += (long long)(m1 - '0') * 60;
	start += (long long)(s10 - '0') * 10;
	start += (long long)(s1 - '0');

	if (start < now)start += (long long)60 * 60 * 24;
	start -= now;
	cout << start / (long long)(60 * 60 * 10);
	start %= (long long)60 * 60 * 10;
	cout << start / (long long)(60 * 60);
	start %= (long long)60 * 60;
	cout << ":";
	cout << start / (long long)(60 * 10);
	start %= (long long)60 * 10;
	cout << start / (long long)(60);
	start %= (long long)60;
	cout << ":";
	cout << start / (long long)(10);
	start %= (long long)10;
	cout << start / (long long)1;
	
}