#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int map[500][500];
int visited[500][500];
queue<pair<int, int>> q;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int BFS(int x, int y, int N, int M);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int count = 0;
	int max = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)cin >> map[i][j];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0 or visited[i][j] == 1)continue;
			count++;
			int tmp = BFS(i, j, N, M);
			if (tmp > max) max = tmp;
		}
	}
	cout << count << "\n" << max;
}
int BFS(int x, int y, int N, int M) {
	int count = 1;
	visited[x][y] = 1;
	q.push({ x,y });
	while(!q.empty()){
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];
			if (nx < 0 or nx >= N or ny < 0 or ny >= M)continue;
			if (visited[nx][ny] == 1 or map[nx][ny] == 0)continue;
			visited[nx][ny] = 1;
			q.push({ nx,ny });
			count++;
		}
	}
	return count;
}