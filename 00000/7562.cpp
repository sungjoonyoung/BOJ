#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int map[301][301];
int dx[8] = { 2,1 ,-2,-1,2,1 ,-2,-1 };
int dy[8] = { 1,2 ,-1,-2,-1,-2 ,1,2 };
void al(void);
void clear(void);
struct b {
	int w, x, y;
};
queue<struct b> q;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		al();
		clear();
	}
}
void al(void) {
	
	int l, nx, ny, ax, ay;
	cin >> l;
	cin >> nx >> ny;
	cin >> ax >> ay;
	
	if (nx == ax and ny == ay) {
		cout << 0<<"\n";
		return;
	}
	q.push({ 0,nx,ny });
	map[nx][ny] = 1;
	while (!q.empty()) {
		int curx = q.front().x;
		int cury = q.front().y;
		int curw = q.front().w;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			if (tmpx < 0 or tmpx > l-1 or tmpy < 0 or tmpy > l-1 or map[tmpx][tmpy] == 1)continue;
			
			if (tmpx == ax and tmpy == ay) {
				cout << curw + 1 << "\n";
				return;
			}

			map[tmpx][tmpy] = 1;
			q.push({ curw + 1,tmpx,tmpy });
		}
	}
	return;
}
void clear(void) {
	for (int i = 0; i < 301; i++) {
		for (int j = 0; j < 301; j++) {
			map[i][j] = 0;
		}
	}
	while (!q.empty())q.pop();
}
