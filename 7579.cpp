#include<iostream>
#include<queue>
#include<utility>
using namespace std;
const int INF = 10000005;
long long map[101][100001];
int me[101];
int cost[101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)cin>>me[i];
	for (int i = 1; i <= N; i++)cin>>cost[i];
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 10001; j++) {
			if (j - cost[i] >= 0) {
				map[i][j] = (max(map[i - 1][j - cost[i]] + me[i], map[i - 1][j])) % (M + 1);
			}
			else map[i][j] = (map[i - 1][j])%(M+1);
		}
	}
	for (int i = 0; i < 10001; i++){
		
		if (map[N][i] >= M) {
			cout << i;
			break;
		}
	}
}