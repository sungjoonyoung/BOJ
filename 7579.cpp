#include<iostream>
#include<queue>
#include<utility>
using namespace std;
long long map[101][10001];
long long me[101];
long long cost[101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)cin >> me[i];
	for (int i = 1; i <= N; i++)cin >> cost[i];
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= 10001; j++) {
			if (j - cost[i] >= 0) {
				if (map[i - 1][j - cost[i]] + me[i] > map[i - 1][j]) {
					long long tmp = (map[i - 1][j - cost[i]] + me[i]);
					map[i][j] = tmp;
				}
				else map[i][j] = map[i - 1][j];
			}
			else map[i][j] = map[i - 1][j];
		}
	}
	for (int i = 0; i <= 10001; i++) {
		//cout << map[N][i] << " ";
		if (map[N][i] >= M) {
			cout << i;
			break;
		}
	}
}