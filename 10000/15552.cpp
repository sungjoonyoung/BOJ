#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a;
	cin >> a;

	int b, c;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		cout << b + c << "\n";
	}
}