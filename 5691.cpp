#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 and b == 0)return 0;
		cout << a * 2 - b<<"\n";
	}
}