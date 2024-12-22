#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<pair<int, int>> v[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
priority_queue<int> answer[1001];
int n, m, k;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int from, to, w;
		cin >> from >> to >> w;
		v[from].push_back({ w,to });
	}
	answer[1].push(0);
	pq.push({ 0, 1 });
	while (!pq.empty()) {
		int curw = pq.top().first;
		int curx = pq.top().second;
		pq.pop();
		for (int i = 0; i < v[curx].size(); i++) {
			int tmpw = v[curx][i].first + curw;
			int tmpx = v[curx][i].second;
			if (answer[tmpx].size() < k) {
				answer[tmpx].push(tmpw);
				pq.push({ tmpw,tmpx });
			}
			else if (answer[tmpx].top() > tmpw) {
				answer[tmpx].pop();
				answer[tmpx].push(tmpw);
				pq.push({ tmpw, tmpx});
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (answer[i].size() < k)cout << "-1\n";
		else cout << answer[i].top() << "\n";
	}
}