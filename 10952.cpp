#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == b and a == 0)break;
		cout << a + b<<"\n";
	}
}