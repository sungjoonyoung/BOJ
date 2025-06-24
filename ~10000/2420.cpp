#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);


	long long a, b, c;
	cin >> a >> b;
	c = a - b;
	if (c > 0)cout << c;
	else {
		c = 0 - c;
		cout << c;

	}

}