#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string base;
	int num;
	int tmp = 0;

	cin >> num;
	cin >> base;
	for (int i = 0; i < num; i++) {
		tmp += base[i];
		tmp -= 48;
	}
	cout << tmp;
}