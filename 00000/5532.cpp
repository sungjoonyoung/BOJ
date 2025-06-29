#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int L, A, B, C, D, Ao, Bo;
	cin >> L >> A >> B >> C >> D;
	Ao = A%C;
	Bo = B%D;
	A /= C;
	B /= D;
	if (Ao > 0)A++;
	if (Bo > 0)B++;
	if (A > B)cout << L - A;
	else cout << L - B;
}