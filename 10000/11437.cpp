#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int PList[2][50001];
vector<int> v[50001];
bool visited[50001];
queue<pair<int,int>> q;
void func(void) {
	int a, b;
	cin >> a >> b;
	if (a != b) {
		while (PList[0][a] != PList[0][b]) {
			if (PList[0][a] < PList[0][b])b = PList[1][b];
			else if (PList[0][a] > PList[0][b])a = PList[1][a];
		}
		while (a!=b) {
			b = PList[1][b];
			a = PList[1][a];
		}
	}
	cout << a << "\n";
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	N--;
	while (N--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push({ 1,1 });
	visited[1] = 1;
	PList[0][1] = 1;
	while (!q.empty()) {
		int curx = q.front().first;
		int curd = q.front().second;
		q.pop();
		if(!v[curx].empty())for (int i = 0; i < v[curx].size(); i++) {
			int nx = v[curx][i];
			int nd = curd + 1;
			if (visited[nx])continue;
			q.push({ nx, nd });
			visited[nx] = 1;
			PList[0][nx] = nd;
			PList[1][nx] = curx;
		}
	}
	int M;
	cin >> M;
	while (M--) func();
}