#include<iostream>
#include<vector>
using namespace std;
vector<int> v[1000001];
int DP[2][1000001];
bool visited[1000001];
void DFS(int x) {
	visited[x] = 1;
	//cout << x << " ";
	if (x!= 1 and v[x].size()==1) {
		DP[1][x] = 1;
		return;
	}
	for (int i = 0; i < v[x].size(); i++) {
		if (visited[v[x][i]])continue;
		DFS(v[x][i]);
		DP[0][x] += DP[1][v[x][i]];
		DP[1][x] += min(DP[1][v[x][i]], DP[0][v[x][i]]);
	}
	DP[1][x]++;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T-1; i++) {
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}
	DFS(1);
	//cout << DP[0][9]<<" ";
	cout << min(DP[0][1], DP[1][1]);
}