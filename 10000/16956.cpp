#include<iostream>
#include<string>
#include<queue>
#include<utility>;
using namespace std;
char map[501][501];
int dx[4] = { 0,1,0, -1 };
int dy[4] = { 1,0,-1,0 };
queue<pair<int, int>> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int R, C;
	string str;
	cin >> R >> C;
	cin.ignore();

	for (int i = 0; i < R; i++) {
		getline(cin, str);
		for (int j = 0; j < C; j++) {
			if (str[j] == ',')map[i][j] = 'D';
			else if (str[j] == 'S') {
				map[i][j] = 'S';
				q.push({ i,j });
			}
			else if (str[j] == 'W')map[i][j] = 'W';
			else map[i][j] = 'D';
		}
	}
	

	int key = 1;
	while (!q.empty() and key) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];
			if (nx < 0 or nx >= R or ny < 0 or ny >= C) continue;
			if (map[nx][ny] == 'W') {
				key = 0;
				break;
			}
		}
	}
	cout << key;
	if (key == 1) {
		cout << "\n";
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout<<map[i][j];
			}
			cout << "\n";
		}
	}
}