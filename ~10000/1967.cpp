#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
bool used[10001];
vector<pair<int, int>> arr[10001];
queue<pair<int, int>>q;
int many[10001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	for (int i = 1; i < N; i++) {
		int from, to, value;
		cin >> from>>to>>value;
		arr[from].push_back({ to,value });
		arr[to].push_back({ from,value });
		many[from]++;
		many[to]++;
	}
	for (int i = 1; i <= N; i++)if (many[i] == 1) {
		q.push({ i,0 });
		break;
	}
	int answer = 0;
	int second;
	while (!q.empty()) {
		int curx = q.front().first;
		int curw = q.front().second;
		used[curx] = 1;
		q.pop();
		//cout << curx <<" " << curw << "\n";
		for (int i = 0; i < arr[curx].size(); i++) {
			if (used[arr[curx][i].first])continue;
			q.push({ arr[curx][i].first ,arr[curx][i].second + curw });

			if (arr[curx][i].second + curw > answer) {
				answer = arr[curx][i].second + curw;
				second = arr[curx][i].first;
			}

		}
	}
	q.push({ second, 0 });

	for (int i = 0; i <= N; i++)used[i] = 0;
	while (!q.empty()) {
		int curx = q.front().first;
		int curw = q.front().second;
		used[curx] = 1;
		q.pop();
		//cout << curx <<" " << curw << "\n";
		for (int i = 0; i < arr[curx].size(); i++) {
			if (used[arr[curx][i].first])continue;
			q.push({ arr[curx][i].first ,arr[curx][i].second + curw });
			answer = max(answer, arr[curx][i].second + curw);
		}
	}
	cout << answer;
}