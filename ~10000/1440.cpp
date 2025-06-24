#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char h10, h1, c, m10, m1, s10, s1;
	cin >> h10 >> h1 >> c >> m10 >> m1 >> c >> s10 >> s1;
	int answer = 0;
	int h = (h10 - '0') * 10 + h1 - '0';
	int m = (m10 - '0') * 10 + m1 - '0';
	int s = (s10 - '0') * 10 + s1 - '0';
	if (h >= 60 or m >= 60 or s >= 60) {
		cout << 0;
		return 0;
	}
	if (!(h <= 12 or m <= 12 or s <= 12)) {
		cout << 0;
		return 0;
	}
	if (h <= 12 and h > 0)answer += 2;
	if (m <= 12 and m > 0 )answer += 2;
	if (s <= 12 and s > 0 )answer += 2;

	cout << answer;

}