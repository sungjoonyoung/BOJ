#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;
	
	cout << (long long)(a + b) * ((long long)abs(b - a) + 1) / (long long)2;
}