#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };
struct st {
	int x, y, w;
};
queue<struct st> q;
int map[1000][1000];
int visited[1000][1000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int M, N, zero=0;
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int tmp;
			cin >> tmp;
			if (tmp == 1) {
				map[i][j] = 1;
				q.push({ i, j, 0 });
				visited[i][j] = 1;
			}
			else if (tmp == -1)map[i][j] = -1;
			else zero++;
		}
	}
	int step;
	while (!q.empty()) {
		int curx = q.front().x;
		int cury = q.front().y;
		int curw = q.front().w;
		step = curw;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			if (tmpx < 0 or tmpx >= N or tmpy < 0 or tmpy >= M)continue;
			if (map[tmpx][tmpy] == -1 or visited[tmpx][tmpy] == 1)continue;
			q.push({ tmpx, tmpy,curw + 1 });
			visited[tmpx][tmpy] = 1;
			zero--;
			
		}
	}
	if (zero == 0)cout << step;
	else cout << "-1";
}