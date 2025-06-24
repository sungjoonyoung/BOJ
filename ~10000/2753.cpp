#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	if (a % 4 == 0 && !(0 ==a % 100))cout << 1;
	else if (a % 400==0)cout << 1;
	else cout << 0;
}