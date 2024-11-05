#include<iostream>
using namespace std;
int from[500];
int to[500];
long long map[500][500];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> from[i] >> to[i];
	for (int k = 1; k < N; k++) {
		for (int i = k; i < N; i++) {
			long long maxnum = (long long)1<<32;
			for (int j = 1; j <= k; j++) {
				maxnum = min(maxnum, map[i - j][i - k] + map[i][i - j + 1] + from[i - k] * from[i-j+1] * to[i]);
			}
			map[i][i-k]=maxnum;
		}
	}

	cout << map[N - 1][0];
	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++)cout << map[i][j] << " ";
	//	cout << "\n";
	//}
}