#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int arr[50][50];
queue<pair<int, int>> q;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int N, M, K;
void BFS(int n) {
	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			if (tmpx < 0 or tmpy < 0 or tmpx >= N or tmpy >= M)continue;
			if (arr[tmpx][tmpy] != n)continue;
			arr[tmpx][tmpy]=0;
			q.push({ tmpx,tmpy });
		}
	}
}
void solve(int n) {
	cin >> M >> N >> K;
	while (K--) {
		int x, y;
		cin >> y >> x;
		arr[x][y] = n;
	}
	int count = 0;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		if (arr[i][j] == n) {
			count++;
			q.push({ i,j });
			arr[i][j]=0;
			BFS(n);
		}
	}
	cout << count<<"\n";
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i=1;i<=T;i++)solve(i);
}