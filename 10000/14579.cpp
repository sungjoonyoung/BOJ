#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long a, b, mul;
	cin >> a >> b;
	mul = 1;
	while (a != b+1) {
		mul *= a*(a + 1) / 2;
		mul = mul % 14579;
		a++;
	}
	
	cout << mul;
}