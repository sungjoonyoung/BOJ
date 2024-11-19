#include<iostream>
#include<utility>;
#include<queue>
using namespace std;
bool visited[2002][2002];
int map[2002][2002];
queue<pair<int, int>> q;
int dx[8] = { 0,1,0,-1,1,-1,-1,1 };
int dy[8] = { 1,0,-1,0,1,-1,1,-1 };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)for (int j = 1; j <= M; j++)cin >> map[i][j];
	q.push({ 1,1 });
	visited[1][1] = 1;
	int key = 1;
	while (!q.empty()) {
		int tmpx = q.front().first;
		int tmpy = q.front().second;
		if (tmpx == N and tmpy == M) {
			key = 0;
			break;
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = tmpx + dx[i];
			int ny = tmpy + dy[i];
			if (visited[nx][ny])continue;
			if (nx == 0 or ny == 0 or nx == N + 1 or ny == M + 1)continue;
			if (map[nx][ny])continue;
			q.push({ nx,ny });
			visited[nx][ny] = 1;
		}
	}
	if(key){
		cout << 0;
		return 0;
	}
	while (!q.empty())q.pop();

	q.push({ 1,0 });
	while (!q.empty()) {
		int tmpx = q.front().first;
		int tmpy = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = tmpx + dx[i];
			int ny = tmpy + dy[i];
			if ((nx == 0 and ny == 0) or (nx == N + 1 and ny == M + 1))continue;
			if (nx < 0 or ny < 0 or nx > N + 1 or ny > M + 1)continue;
			if (map[nx][ny] == 2)continue;
			if (ny == 0) {
				map[nx][ny] = 2;
				q.push({ nx,ny });
			}
			else if (nx == N + 1) {
				map[nx][ny] = 2;
				q.push({ nx,ny });
			}
			else if (map[nx][ny] == 1) {
				map[nx][ny] = 2;
				q.push({ nx,ny });
			}
		}
	}
	/*for (int i = 0; i <= N+1; i++) {
		for (int j = 0; j <= M+1; j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}*/
	q.push({ 0,1 });
	while (!q.empty()) {
		int tmpx = q.front().first;
		int tmpy = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = tmpx + dx[i];
			int ny = tmpy + dy[i];
			if ((nx == 0 and ny == 0) or (nx == N + 1 and ny == M + 1))continue;
			if (nx < 0 or ny < 0 or nx > N + 1 or ny > M + 1)continue;
			if (map[nx][ny] == 2 or map[nx][ny]==3)continue;
			if (nx == 0) {
				map[nx][ny] = 3;
				q.push({ nx,ny });
			}
			else if (ny == M + 1) {
				map[nx][ny] = 3;
				q.push({ nx,ny });
			}
			else if (map[nx][ny] == 1) {
				map[nx][ny] = 3;
				q.push({ nx,ny });
			}
		}
	}
	/*for (int i = 0; i <= N+1; i++) {
		for (int j = 0; j <= M+1; j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}*/
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if ((i == 1 and j == 1) or (i == N and j == M))continue;
			if (map[i][j])continue;
			int two = 0;
			int thr = 0;
			for (int k = 0; k < 8; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (map[nx][ny] == 2)two++;
				if (map[nx][ny] == 3)thr++;
			}
			if (two * thr) {
				cout << 1;
				return 0;
			}
		}
	}
	cout << 2;
}