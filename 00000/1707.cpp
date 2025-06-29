#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
queue<pair<int, int>> q;
vector<int> arr[20001];
int visited[20001];
void solv(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		solv();
		while (!q.empty())q.pop();
		for (int i = 1; i <= 20000; i++)if (!arr[i].empty())arr[i].clear();
		for (int i = 1; i <= 20000; i++)visited[i] = 0;
	}
}
void solv(void) {
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	/*q.push({ 1,1 });
	visited[1] = 1;*/
	for(int i=1;i<=V;i++){
		if (visited[i])continue;
		q.push({ i,1 });
		visited[i] = 1;
		while (!q.empty()) {
			int tmpx = q.front().first;
			int tmpw = q.front().second;
			q.pop();
			if (!arr[tmpx].empty()) for (int i = 0; i < arr[tmpx].size(); i++) {
				if (visited[arr[tmpx][i]] == 1 and tmpw == 1) {
					cout << "NO\n";
					return;
				}
				else if (visited[arr[tmpx][i]] == 2 and tmpw == 2) {
					cout << "NO\n";
					return;
				}
				if (visited[arr[tmpx][i]])continue;
				if (tmpw == 1) {
					visited[arr[tmpx][i]] = 2;
					q.push({ arr[tmpx][i],2 });
				}
				else {
					visited[arr[tmpx][i]] = 1;
					q.push({ arr[tmpx][i],1 });
				}
			}
		}
	}
	cout << "YES\n";
}