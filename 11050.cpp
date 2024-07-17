#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, k1, k2;
	cin >> N >> k1;
	k2 = N - k1;
	int tmp=1;
	for (int i = k1+1; i < N+1; i++) {
		tmp *= i;
	}
	for (int i = 1; i < k2+1; i++) {
		tmp /= i;
	}
	cout << tmp;
}