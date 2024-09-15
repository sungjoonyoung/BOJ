#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int map[8][8];
vector<int> type;
vector<pair<int,int>> where;
vector<int> dire;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
void func(int x);
void op(int x);
void dop(int x);
void shoot(int x, int y, int d ,int n);
void dshoot(int x, int y, int d, int n);
void findzero(void);
int N, M;
int answer = 9 * 9;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		int a;
		cin >> a;
		map[i][j]=a;
		if (1 <= a and a <= 5) {
			type.push_back(a);
			dire.push_back(0);
			where.push_back({ i,j });
		}
	}
	if (!type.empty())func(0);
	else findzero();
	cout << answer;
}
void func(int x) {
	if (x == type.size()) {
		findzero();
		return;
	}
	for (int i = 0; i < 4; i++) {
		dire[x] = i;
		op(x);
		func(x + 1);
		dop(x);
	}
}
void op(int x) {
	if (type[x] == 1) shoot(where[x].first, where[x].second,dire[x],x);
	else if (type[x] == 2) {
		shoot(where[x].first, where[x].second, dire[x], x);
		shoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
	}
	else if (type[x] == 3) {
		shoot(where[x].first, where[x].second, dire[x], x);
		shoot(where[x].first, where[x].second, (dire[x]+1)%4, x);
	}
	else if (type[x] == 4) {
		shoot(where[x].first, where[x].second, dire[x], x);
		shoot(where[x].first, where[x].second, (dire[x] + 1) % 4, x);
		shoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
	}
	else if (type[x] == 5) {
		shoot(where[x].first, where[x].second, dire[x], x);
		shoot(where[x].first, where[x].second, (dire[x] + 1) % 4, x);
		shoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
		shoot(where[x].first, where[x].second, (dire[x] + 3) % 4, x);
	}
	return;
}
void shoot(int x, int y, int d, int n) {
	int curx = x;
	int cury = y;
	int curd = d;
	while (1) {
		curx += dx[curd];
		cury += dy[curd];
		if (curx < 0 || curx >= N || cury < 0 || cury >= M)break;
		if (map[curx][cury] == 6)break;
		if (map[curx][cury] > 0)continue;
		map[curx][cury] = n + 7;
	}
	return;
}
void dop(int x) {
	if (type[x] == 1) dshoot(where[x].first, where[x].second, dire[x], x);
	else if (type[x] == 2) {
		dshoot(where[x].first, where[x].second, dire[x], x);
		dshoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
	}
	else if (type[x] == 3) {
		dshoot(where[x].first, where[x].second, dire[x], x);
		dshoot(where[x].first, where[x].second, (dire[x] + 1) % 4, x);
	}
	else if (type[x] == 4) {
		dshoot(where[x].first, where[x].second, dire[x], x);
		dshoot(where[x].first, where[x].second, (dire[x] + 1) % 4, x);
		dshoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
	}
	else if (type[x] == 4) {
		dshoot(where[x].first, where[x].second, dire[x], x);
		dshoot(where[x].first, where[x].second, (dire[x] + 1) % 4, x);
		dshoot(where[x].first, where[x].second, (dire[x] + 2) % 4, x);
		dshoot(where[x].first, where[x].second, (dire[x] + 3) % 4, x);
	}
	return;
}
void dshoot(int x, int y, int d, int n) {
	int curx = x;
	int cury = y;
	int curd = d;
	while (1) {
		curx += dx[curd];
		cury += dy[curd];
		if (curx < 0 || curx >= N || cury < 0 || cury >= M)break;
		if (map[curx][cury] == 6)break;
		if (map[curx][cury] == n + 7)map[curx][cury] = 0;
		if (map[curx][cury] > 0)continue;
	}
	return;
}
void findzero(void) {
	int zero = 0;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) if (!map[i][j])zero++;
	answer = min(answer, zero);
}