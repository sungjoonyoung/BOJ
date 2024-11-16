#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		a %= 10;
		int tmp = 1;
		if (b == 1) {
			if (a == 0)cout << "10\n";
			else cout << a << "\n";
			continue;
		}
		for (int i = 1; i <= b; i++) {
			tmp *= a;
			tmp %= 10;
			/*if (i!=1 and tmp == a) {
				for (int j = 0; j < b % i; j++) {
					tmp *= a;
					tmp %= 10;
				}
				cout << tmp << "\n";
				break;
			}*/
		}
		if (tmp == 0)cout << "10\n";
		else cout << tmp << "\n";
	}
}