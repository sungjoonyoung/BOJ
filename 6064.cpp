#include<iostream>
using namespace std;

int GCD(int x, int y);
int LCM(int x, int y);
int M, N, x, y;
void f(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		cin >> M >> N >> x >> y;
		f();
	}
}
int LCM(int x, int y) {
	return x / GCD(max(x, y), min(x, y)) * y;
}
int GCD(int x, int y) {
	if (y == 0)return x;
	return GCD(y, x % y);
}
void f(void) {
	for (int i = x; i <= LCM(max(M,N),min(M,N)); i += M) {
		if (i % N == y) {
			cout << i<<"\n"; return;
		}
		if (i % N == 0 and y==N) {
			cout << i<<"\n"; return;
		}
	}
	cout << "-1\n";
	return;
}