#include<iostream>
using namespace std;
bool x[50];
bool y[50];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int n=0, m=0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char c;
			cin >> c;
			if (c == 'X') {
				x[i] = 1;
				y[j] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++)if (!x[i])n++;
	for (int j = 0; j < M; j++)if (!y[j])m++;
	cout << max(n, m);
}