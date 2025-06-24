#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int man[32001];
vector<int> map[32001];
queue<int> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		man[to]++;
		map[from].push_back(to);
	}
	for (int i = 1; i <= N; i++)if (man[i] == 0)q.push(i);
	while (!q.empty()) {
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
		if (!map[tmp].empty())for (int i = 0; i < map[tmp].size(); i++) {
			man[map[tmp][i]]--;
			if (man[map[tmp][i]] == 0) {
				q.push(map[tmp][i]);
			}
		}
	}
}