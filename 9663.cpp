#include<iostream>
using namespace std;
bool arr[15][15];
bool used[15];
int sum = 0;
void queen(int x,int N);
bool find(int x, int y, int N);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	if (N == 1)cout << 1;
	else {
		for (int i = 0; i < N; i++) {
			used[i] = 1;
			arr[0][i] = 1;
			queen(1, N);
			used[i] = 0;
			arr[0][i] = 0;
		}
		cout << sum;
	}
}
void queen(int x, int N) {
	for (int i = 0; i < N; i++) {
		if (!used[i] and find(x, i, N)) {
			if (x == N-1) {
				sum++;
				continue;
			}
			used[i] = 1;
			arr[x][i] = 1;
			queen(x + 1, N);
			used[i] = 0;
			arr[x][i] = 0;
		}
	}
	return;
}
bool find(int x, int y, int N) {
	for (int i = 1; i < 15; i++) {
		if (y + i >= N or x - i < 0) break;
		if (arr[x - i][y + i] == 1)return 0;
	}
	for (int i = 1; i < 15; i++) {
		if (x - i <0 or y - i < 0) break;
		if (arr[x - i][y - i] == 1)return 0;
	}
	return 1;
}