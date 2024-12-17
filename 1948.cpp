#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
vector<pair<int, int>> v[10001];
int maxnum[10001];
int man[10001];
vector<int> back[10001];
queue<pair<int, int>> q;
queue<int> backq;
bool visited[10001];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to, w;
		cin >> from >> to >> w;
		v[from].push_back({ to, w });
		man[to]++;
	}
	int begin, end;
	cin >> begin >> end;
	q.push({ begin,0 });
	while (!q.empty()) {
		int curx = q.front().first;
		int curw = q.front().second;
		q.pop();
		if (!v[curx].empty())for (int i = 0; i < v[curx].size(); i++) {
			int tmpx = v[curx][i].first;
			int tmpw = v[curx][i].second;
			man[tmpx]--;
			if (maxnum[tmpx] < curw + tmpw) {
				maxnum[tmpx] = curw + tmpw;
				back[tmpx].clear();
				back[tmpx].push_back(curx);
			}
			else if (maxnum[tmpx] == curw + tmpw) {
				back[tmpx].push_back(curx);
			}
			if (man[tmpx] == 0) {
				q.push({ tmpx,maxnum[tmpx]});
			}
		}
	}
	cout << maxnum[end] << "\n";


	int count = 0;
	backq.push(end);
	visited[end] = 1;
	while (!backq.empty()) {
		int curx = backq.front();
		backq.pop();
		if (!back[curx].empty())for (int i = 0; i < back[curx].size(); i++) {
			int tmpx = back[curx][i];
			count++;
			if (visited[tmpx])continue;
			visited[tmpx] = 1;
			backq.push(tmpx);
		}
	}
	cout << count;
}