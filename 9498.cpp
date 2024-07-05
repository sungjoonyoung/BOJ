#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	cin >> a;

	if (a > 89) cout << "A";
	else if (a > 79) cout << "B";
	else if (a > 69) cout << "C";
	else if (a > 59) cout << "D";
	else cout << "F";
}