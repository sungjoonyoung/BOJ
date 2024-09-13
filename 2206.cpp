#include<iostream>
#include<queue>
using namespace std;
struct struc {
	int x, y, w, b;
};
int map[1001][1001];
bool visited[2][1001][1001];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
queue<struct struc> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char tmp;
			cin >> tmp;
			map[i][j] = int(tmp)-48;
		}
	}

	/*for (int i = 0; i < N; i++) {
		
		for (int j = 0; j <M; j++) {
			cout << map[i][j];
			
		}
		cout << "\n";
	}*/
	q.push({ 0,0,0,0 });
	bool key = 1;
	while (!q.empty()) {
		if (q.front().x == N-1 && q.front().y == M-1) {
			cout << q.front().w+1;
			key = 0;
			break;
		}
		int curx = q.front().x;
		int cury = q.front().y;
		int curw = q.front().w;
		int curb = q.front().b;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
			if (visited[curb][nx][ny] == 1)continue;
			if (map[nx][ny] == 1) {
				if (curb == 0) {
					q.push({ nx,ny,curw + 1,1 });
					visited[1][nx][ny] = 1;
					continue;
				}
				else continue;
			}
			if(curb==1)q.push({ nx,ny,curw + 1,1 });
			else q.push({ nx,ny,curw + 1,0 });
			visited[curb][nx][ny] = 1;
		}
	}
	if (key == 1)cout << "-1";
}