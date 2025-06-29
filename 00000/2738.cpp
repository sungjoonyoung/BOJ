#include<iostream>
using namespace std;
int arr[2][100][100];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < 2; i++)for (int j = 0; j < N; j++)for (int k = 0; k < M; k++)cin >> arr[i][j][k];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)cout << arr[0][i][j] + arr[1][i][j] << " ";
		cout << "\n";
	}
}