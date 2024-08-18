#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T,a, b;
	cin >> T;
	while (T--) {
		cin >> a >> b;
		cout << a + b;
		cout << "\n";
	}
}