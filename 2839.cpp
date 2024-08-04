#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	int five, three,N, M;
	cin >> N;
	int key = 1;
	for (int i = N / 5; i >= 0; i--) {
		int tmp = 5 * i;
		for (int j = 0; 3*j <= N; j++) {
			if (tmp == N) {
				cout << i + j;
				key = 0;
				break;
			}
			else tmp += 3;
		}
		if (key == 0)break;
	}
	if (key == 1)cout << "-1";
}