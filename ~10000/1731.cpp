#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	long long a, b, c;
	cin >> a >> b >> c;
	int op;
	if (b - a == c - b)op = 1;
	else if (c * a == b * b)op = 2;
	if (N != 3)for (int i = 0; i < N - 3; i++) cin >> c;
	if (op == 1)cout << c + b - a;
	else cout << c / a * b;
}