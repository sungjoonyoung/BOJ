#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
struct struc {
	long long s, e, w;
};
vector<struct struc> v;
vector<int> bv[50];
long long dis[50];
long long giv[50];
bool visited[50];
queue<int> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, S, E, M;
	cin >> N >> S >> E >> M;
	for (int i = 0; i < M; i++) {
		long long s, e, w;
		cin >> s >> e >> w;
		v.push_back({ s,e,w });
		bv[s].push_back(e);
	}
	for (int i = 0; i < N; i++)cin >> giv[i];
	for (int i = 0; i < N; i++)dis[i] = LLONG_MAX;
	dis[S] = (long long)0 - giv[S];
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < v.size(); j++) {
			long long tmps = v[j].s;
			long long tmpe = v[j].e;
			long long tmpw = v[j].w;
			if (dis[tmps] == LLONG_MAX)continue;
			if (dis[tmps] + tmpw - giv[tmpe] < dis[tmpe])dis[tmpe] = dis[tmps] + tmpw - giv[tmpe];
		}
	}
	for (int j = 0; j < v.size(); j++) {
		long long tmps = v[j].s;
		long long tmpe = v[j].e;
		long long tmpw = v[j].w;
		if (dis[tmps] == LLONG_MAX)continue;
		if (dis[tmps] + tmpw - giv[tmpe] < dis[tmpe])q.push(tmpe);
	}
	if (dis[E] == LLONG_MAX) {
		cout << "gg";
		return 0;
	}
	while (!q.empty()) {
		int curx = q.front();
		q.pop();
		for (int i = 0; i < bv[curx].size(); i++) {
			int tmpx = bv[curx][i];
			if (visited[tmpx])continue;
			if (tmpx == E) {
				cout << "Gee";
				return 0;
			}
			q.push(tmpx);
			visited[tmpx] = 1;
		}
	}
	cout << (long long)0-dis[E];
}