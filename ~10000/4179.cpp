#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct stru {
	int x, y, w;
};
queue<struct stru> q;
queue<struct stru> qf;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };
int map[1000][1000];
int visited[1000][1000];
int visitedfire[1000][1000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, zero = 0;
	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		M = 0;
		for (char c : str) {
			if (c == '#') {
				map[i][M] = -1;
			}
			else if (c == 'J') {
				map[i][M] = 1;
				visited[i][M] = 1;
				q.push({ i,M,0 });
			}
			else if (c == 'F') {
				map[i][M] = 2;
				visitedfire[i][M] = 1;
				qf.push({ i,M,0 });
			}
			else if (c == '.') {
				map[i][M] = 0;
			}

			M++;
		}
	}

	int time = 0;
	int timef = 0;
	int key = 0;
	while (!q.empty()) {
		if (key == 1)break;
		while (!qf.empty()) {
			int curxf = qf.front().x;
			int curyf = qf.front().y;
			int curwf = qf.front().w;
			if (curwf != timef)break;
			qf.pop();
			for (int i = 0; i < 4; i++) {
				int tmpxf = curxf + dx[i];
				int tmpyf = curyf + dy[i];
				if (visitedfire[tmpxf][tmpyf] == 1 or map[tmpxf][tmpyf] == -1)continue;
				if (tmpxf < 0 or tmpxf >= N or tmpyf < 0 or tmpyf >= M)continue;
				map[tmpxf][tmpyf] = 2;
				qf.push({ tmpxf,tmpyf,curwf + 1 });
				visitedfire[tmpxf][tmpyf] = 1;
			}
		}
		while (!q.empty()) {
			int curx = q.front().x;
			int cury = q.front().y;
			int curw = q.front().w;
			if (curw != timef)break;
			if (curx == N - 1 or cury == M - 1 or curx == 0 or cury == 0) {
				cout << curw + 1;
				key = 1;
				break;
			}
			q.pop();
			if (key == 1)break;
			for (int i = 0; i < 4; i++) {
				int tmpx = curx + dx[i];
				int tmpy = cury + dy[i];
				if (visited[tmpx][tmpy] == 1 or map[tmpx][tmpy] == 2 or map[tmpx][tmpy] == -1)continue;
				if (tmpx < 0 or tmpy < 0 or tmpx >= N or tmpy >= M)continue;
				q.push({ tmpx,tmpy,curw + 1 });
				visited[tmpx][tmpy] = 1;
			}
			if (q.empty())break;
		}
		timef++;
		time++;
	}
	if (key == 0)cout << "IMPOSSIBLE";
}