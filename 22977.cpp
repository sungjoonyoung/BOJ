#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	long long sum=0;
	int x, y, bx=-101, by=-101;
	cin >> bx >> by;
	N--;
	while (N--) {
		cin >> x >> y;
		if (bx == x) {
			if (y > by) {
				sum += y - by;
			}
			bx = x;
			by = y;
		}
		else {
			if (x < bx) {
				sum += bx - x;
			}
			bx = x;
			by = y;
		}
	}
	cout << sum*2;
}