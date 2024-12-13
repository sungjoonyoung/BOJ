#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int timearr[500];
int out[500];
vector<int> v[500];
int many[500];
int maxtime[500];
queue<pair<int, int>> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> timearr[i];
		while (1) {
			int in;
			cin >> in;
			if (in == -1)break;
			v[in-1].push_back(i);
			many[i]++;
		}
	}
	for (int i = 0; i < N; i++)if (many[i] == 0)q.push({ timearr[i],i});
	while (!q.empty()) {
		int curt = q.front().first;
		int curx = q.front().second;
		q.pop();
		out[curx] = curt;
		if (!v[curx].empty())for (int i = 0; i < v[curx].size(); i++) {
			maxtime[v[curx][i]] = max(maxtime[v[curx][i]], curt + timearr[v[curx][i]]);
			many[v[curx][i]]--;
			if (many[v[curx][i]] == 0)q.push({ maxtime[v[curx][i]] ,v[curx][i] });
		}
	}
	for (int i = 0; i < N; i++)cout << out[i] << "\n";
}