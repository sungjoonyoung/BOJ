#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct step {
	int x, y, w;
};
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
vector<vector<int>> map;
vector<vector<int>> visited;
queue <step> q;
void BFS(int x, int y, int N, int M);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M, sx,sy;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		map.push_back(vector<int>());
		visited.push_back(vector<int>());
		for (int j = 0; j < M; j++) {
			int tmp;
			cin >> tmp;
			if (tmp == 0) {
				map[i].push_back(-1);
				visited[i].push_back(0);
			}
			else {
				map[i].push_back(tmp);
				visited[i].push_back(0);
			}
			if (tmp == 2) { sx = i; sy = j; }
		}
	}

	BFS(sx, sy, N,M);
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 1 and visited[i][j]==0)cout << "-1 ";
			else if (map[i][j] == -1) cout << "0" << " ";
			else cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	
}
void BFS(int x, int y, int N, int M) {
	int w = 0;
	map[x][y] = w;
	visited[x][y] = 1;
	q.push({ x,y,w });

	while (!q.empty()) {
		for (int i = 0; i < 4; i++) {
			int tmpx = q.front().x;
			int tmpy = q.front().y;
			int tmpw = q.front().w;
			tmpx += dx[i];
			tmpy += dy[i];
			if (tmpx == -1 or tmpx == N or tmpy == -1 or tmpy == M or visited[tmpx][tmpy]==1 or map[tmpx][tmpy]==-1)continue;
			q.push({ tmpx,tmpy,tmpw + 1 });
			map[tmpx][tmpy] = tmpw+1;
			visited[tmpx][tmpy] = 1;
		}
		q.pop();
	}
}