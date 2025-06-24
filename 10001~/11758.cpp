#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	long long CCW = x1 * y2 + x2 * y3 + x3 * y1 - (y1 * x2 + y2 * x3 + y3 * x1);
	if (CCW == 0)cout << 0;
	else cout << CCW / abs(CCW);
}