#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	cout << abs((b - 1) / 4 - (a - 1) / 4) + abs((b - 1) % 4 - (a - 1) % 4);
}