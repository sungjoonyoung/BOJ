#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int a, b, c;
	a = 1;
	b = 0;
	c = 0;
	while (N--) {
		int x, y;
		cin >> x >> y;
		if (max(x, y) == 3 and min(x, y) == 2)swap(b, c);
		else if (max(x, y) == 3 and min(x, y) == 1)swap(a, c);
		else if (max(x, y) == 2 and min(x, y) == 1)swap(a, b);
	}
	if (a)cout << 1;
	else if (b)cout << 2;
	else if (c)cout << 3;
}