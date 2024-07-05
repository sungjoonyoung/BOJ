#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	cin >> x;
	cin >> y;

	if (x > 0 && y > 0)cout << "1";
	else if (x < 0 && y > 0)cout << "2";
	else if (x < 0 && y < 0)cout << "3";
	else if (x > 0 && y < 0)cout << "4";
}