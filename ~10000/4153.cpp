#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b, c, key;
	key = 1;
	while (key) {
		cin >> a >> b >> c;
		a = a * a;
		b = b * b;
		c = c * c;
		
		if (a + b + c == 0) {
			key = 0;
			break;
		}
		else if (a == b+c)cout << "right" << "\n";
		else if (b == a+c)cout << "right" << "\n";
		else if (c == b+a)cout << "right" << "\n";
		else cout << "wrong" << "\n";
	}

	
}