#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	A += B; C *= 2;
	if (A >= C)cout << A - C;
	else cout << A;
}