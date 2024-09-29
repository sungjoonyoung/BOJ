#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
queue<int> q;
stack<int> s;
int map[1001][1001];
int N, M, S;
bool used[1001];
void DFS(int x);
void BFS(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M >> S;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[a][0] = max(map[a][0],b);
		map[b][a] = 1;
		map[b][0] = max(map[b][0], a);
	}
	used[S] = 1;
	cout << S<<" ";
	DFS(S);
	for (int i = 1; i <= N; i++)used[i] = 0;
	cout << "\n";
	BFS();
}
void DFS(int x) {
	for (int i = 1; i <= map[x][0]; i++) {
		if (map[x][i] == 0)continue;
		if (used[i])continue;
		cout << i << " ";
		used[i] = 1;
		DFS(i);
		
	}
	return;
}
void BFS(void) {
	q.push(S);
	used[S] = 1;
	//cout << S << " ";
	while (!q.empty()) {
		int curx = q.front();
		cout << curx << " ";
		q.pop();
		for (int i = 1; i <= map[curx][0]; i++) {
			if (map[curx][i] == 0)continue;
			if (used[i])continue;
			q.push(i);
			used[i] = 1;
		}
	}
}