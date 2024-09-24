#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		if (N == 1)break;
		while (N % i == 0) {
			N /= i;
			cout << i << "\n";
		}
	}
}