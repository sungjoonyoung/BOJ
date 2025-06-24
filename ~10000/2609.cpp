#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, Max, Min;
	cin >> N >> M;
	if (N > M) {
		Max = M;
		Min = N;
	}
	else {
		Max = N;
		Min = M;
	}
	for (int i = Max; i > 0; i--) {
		if (N % i + M % i == 0) {
			Max = i;
			break;
		}
	}
	for (int i = Min; i < M * N + 1; i++) {
		if (i % M + i % N == 0) {
			Min = i;
			break;
		}
	}
	cout << Max << "\n" << Min;
}