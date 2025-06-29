#include<iostream>
using namespace std;
int N, M;
char arr[10][10];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
void solve(int rx, int ry, int bx, int by, int count, int before);
void t(int rx, int ry, int bx, int by, int count, int before);
int minnum = 11;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int rx, ry, bx, by;
	cin >> N >> M;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		char in;
		cin >> in;
		if (in == '#')arr[i][j] = '#';
		else if (in == 'O')arr[i][j] = 'O';
		else arr[i][j] = '.';
		if (in == 'R') {
			rx = i;
			ry = j;
		}
		if (in == 'B') {
			bx = i;
			by = j;
		}
	}
	/*for (int i = 0; i < N; i++){
		cout << "\n";
		for (int j = 0; j < M; j++) {
			cout << arr[i][j];
		}
	}*/
	solve(rx, ry, bx, by, 0, 4);
	if (minnum == 11)cout << "-1";
	else cout << minnum;
}
void solve(int rx, int ry, int bx, int by, int count, int before) {
	if (count == 10)return;
	if (before != 0)t(rx, ry, bx, by, count + 1, 0);
	if (before != 1)t(rx, ry, bx, by, count + 1, 1);
	if (before != 2)t(rx, ry, bx, by, count + 1, 2);
	if (before != 3)t(rx, ry, bx, by, count + 1, 3);
}
void t(int rx, int ry, int bx, int by, int count, int before) {
	bool rhall = 0;
	
	rx += dx[before];
	ry += dy[before];
	if (!rhall)while (arr[rx][ry] != '#' and !(rx == bx and ry == by)) {
		if (arr[rx][ry] == 'O') {
			rhall = 1;
			rx = 0;
			ry = 0;
			break;
		}
		rx += dx[before];
		ry += dy[before];
	}
	rx -= dx[before];
	ry -= dy[before];

	bx += dx[before];
	by += dy[before];
	while (arr[bx][by] != '#' and !(rx == bx and ry == by)) {
		if (arr[bx][by] == 'O') return;
		bx += dx[before];
		by += dy[before];

	}
	bx -= dx[before];
	by -= dy[before];

	rx += dx[before];
	ry += dy[before];
	if (!rhall)while (arr[rx][ry] != '#' and !(rx == bx and ry == by)) {
		if (arr[rx][ry] == 'O') {
			rx = 0;
			ry = 0;
			rhall = 1;
			break;
		}
		rx += dx[before];
		ry += dy[before];
	}
	rx -= dx[before];
	ry -= dy[before];
	if (rhall) {
		minnum = min(minnum, count);
		return;
	}
	solve(rx, ry, bx, by, count, before);
}