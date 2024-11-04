#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, tmp;
	cin >> a >> b;
	while (1) {
		tmp = b;
		b = a % b;
		a = tmp;
		if (b == 0)break;
	}
	while (tmp--)cout << "1";
}