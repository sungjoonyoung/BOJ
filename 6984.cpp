#include<iostream>
#include<vector>
#include<utility>
#include<string>
#include<queue>
using namespace std;
queue<pair<string, int>> q;
vector<int> v['z' - 'a' + 1];
bool visited['z'-'a'+1];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string less, more;
		cin >> less >> more;
		int lc, rc;
		lc = less[0]-'A';
		rc = more[0]-'A';
		v[lc].push_back(rc);
		v[rc].push_back(lc);
	}
	while (M--) {
		string less, more;
		cin >> less >> more;
		string begins;
		char endc=more[0];
		begins.push_back(less[0]);
		//rc[0] = more[0] - 'A';
		q.push({ begins,begins[0] - 'A'});
		visited[begins[0] - 'A'] = 1;
		while (!q.empty()) {
			int curx = q.front().second;
			string curs = q.front().first;
			if (curx == endc - 'A') {
				cout << curs << "\n";
				break;
			}
			q.pop();
			for (int i = 0; i < v[curx].size(); i++) {
				int tmp = v[curx][i];
				if (visited[tmp])continue;
				curs.push_back(tmp + 'A');
				q.push({ curs,tmp });
				visited[tmp] = 1;
				curs.pop_back();
			}
		}
		while (!q.empty())q.pop();
		for (int i = 0; i <= 'z' - 'a'; i++)visited[i] = 0;
	}
}