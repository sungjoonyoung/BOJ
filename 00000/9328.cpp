#include<iostream>
#include<queue>
#include<utility>
#include<string>
#include<vector>
using namespace std;
char arr[100][100];
bool visited[100][100];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int key;
int answer;
int N, M;
queue<pair<int, int>> q;
vector<pair<int, int>> door[30];
void BFS(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		cin >> N >> M;
		for (int i = 0; i < N; i++)for (int j = 0; j < M; j++)cin >> arr[i][j];
		string str;
		cin >> str;
		if (str != "0")for (int i = 0; i < str.size(); i++)key = key | (1 << (str[i] - 'a'));
		for (int i = 0; i < N; i++)if (arr[i][0] != '*')BFS(i, 0);
		for (int i = 0; i < N; i++)if (arr[i][M - 1] != '*')BFS(i, M - 1);
		for (int i = 0; i < M; i++)if (arr[0][i] != '*')BFS(0, i);
		for (int i = 0; i < M; i++)if (arr[N - 1][i] != '*')BFS(N - 1, i);

		/*for (int i = 0; i < N; i++){
			cout << "\n";
			for (int j = 0; j < M; j++)cout << arr[i][j];
		}*/
		cout << answer << "\n";
		key = 0;
		for (int i = 0; i < 30; i++) {
			door[i].clear();
		}
		for (int i = 0; i < N; i++)for (int j = 0; j < M; j++)visited[i][j] = 0;
		answer = 0;
	}

}
void BFS(int x, int y) {
	q.push({ x,y });
	visited[x][y] = 1;
	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		if ('A' <= arr[curx][cury] and arr[curx][cury] <= 'Z') {
			int tmpdoor = arr[curx][cury] - 'A';
			if (key != (key | (1 << tmpdoor))) {
				door[tmpdoor].push_back({ curx,cury });
				arr[curx][cury] = '*';
				continue;
			}
		}
		if ('a' <= arr[curx][cury] and arr[curx][cury] <= 'z') {
			int tmpdoor = arr[curx][cury] - 'a';
			if (!door[tmpdoor].empty() and key != (key | (1 << tmpdoor)))while (!door[tmpdoor].empty()) {
				q.push({ door[tmpdoor].back().first,door[tmpdoor].back().second });
				door[tmpdoor].pop_back();
			}
			key = (key | (1 << tmpdoor));
		}
		if (arr[curx][cury] == '$')answer++;

		arr[curx][cury] = '*';

		for (int i = 0; i < 4; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			if (tmpx < 0 or tmpx >= N or tmpy < 0 or tmpy >= M)continue;
			if (arr[tmpx][tmpy] == '*')continue;
			if (visited[tmpx][tmpy])continue;
			visited[tmpx][tmpy] = 1;
			q.push({ tmpx,tmpy });
		}
	}
}