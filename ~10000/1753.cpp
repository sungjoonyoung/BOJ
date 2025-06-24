#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<pair<int, int>> arr[20001];
class cmp {
public:
	bool operator() (pair<int, int> a, pair<int, int> b) {
		return a.first > b.first;
	}
};
priority_queue<pair<int, int>, vector<pair<int,int>>, cmp> pq;
bool fix[20001];
int out[20001];
int INF = 10000000000;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int V, E, start;
	cin >> V >> E >> start;
	for (int i = 0; i < E; i++) {
		int from, to, w;
		cin >> from >> to >> w;
		arr[from].push_back({ w,to });
	}
	for (int i = 0; i <= V; i++)out[i] = INF;
	pq.push({ 0,start });
	
	while (!pq.empty()) {
		int curw = pq.top().first;
		int curfrom = pq.top().second;
		pq.pop();
		if (fix[curfrom])continue;
		fix[curfrom] = 1;
		if (!arr[curfrom].empty())for (int i = 0; i < arr[curfrom].size(); i++) {
			if (fix[arr[curfrom][i].second])continue;
			out[arr[curfrom][i].second] = min(out[arr[curfrom][i].second], curw + arr[curfrom][i].first);
			pq.push({ curw + arr[curfrom][i].first,arr[curfrom][i].second });
		}
	}
	for (int i = 1; i <= V; i++) {
		if (i == start)cout << "0\n";
		else if (out[i] == INF)cout << "INF\n";
		else cout << out[i] << "\n";
	}
}