#include<iostream>
#include<queue>
#include<utility>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int D[100001];
vector<int> AdList[100001];
queue<pair<int, int>> q;
int Parent[20][100001];
bool visited[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		AdList[a].push_back(b);
		AdList[b].push_back(a);
	}
	q.push({ 1, 1 });
	visited[1] = 1;
	D[1] = 1;
	while (!q.empty()) {
		int curx = q.front().first;
		int curd = q.front().second;
		q.pop();
		if (!AdList[curx].empty()) for (int i = 0; i < AdList[curx].size(); i++) {
			int tmpx = AdList[curx][i];
			int tmpd = curd + 1;
			if (visited[tmpx])continue;
			q.push({ tmpx, tmpd });
			visited[tmpx] = 1;
			D[tmpx] = tmpd;
			Parent[0][tmpx] = curx;
		}
	}
	for (int root = 1; root < 18; root++) {
		for (int i = 1; i <= N; i++) {
			Parent[root][i] = Parent[root - 1][Parent[root - 1][i]];
		}
	}

	int M;
	cin >> M;
	while (M--) {
		int a, b;
		cin >> a >> b;
		if (D[a] > D[b])swap(a, b);
		if (a != b) {
			while (D[b] - D[a]) {
				b = Parent[(int)log2(D[b] - D[a])][b];
			}
			while (a != b) {
				for (int i = 18; i >= 0; i--) {
					if (Parent[i][a] != Parent[i][b]) {
						a = Parent[i][a];
						b = Parent[i][b];
						break;
					}
				}
				if (Parent[0][a] == Parent[0][b]) {
					a = Parent[0][a];
					b = Parent[0][b];
					break;
				}
			}
		}
		cout << a << "\n";
	}
}
