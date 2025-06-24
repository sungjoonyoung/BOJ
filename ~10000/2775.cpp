#include<iostream>
using namespace std;
int arr[15][15];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		int sum = 0;
		for (int j = 0; j < 15; j++) {
			sum += arr[i - 1][j];
			arr[i][j] = sum;
		}
	}
	int T, K, N;
	cin >> T;
	while (T--) {
		cin >> K >> N;
		cout << arr[K][N]<<"\n";
	}
}