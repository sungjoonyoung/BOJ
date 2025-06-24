#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	if (C % 2)cout << (A ^ B);
	else cout << A;
}