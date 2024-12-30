#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<int> arr[50];
queue<int> q;
bool visited[50];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int start;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		if (in == -1) {
			start = i;
		}
		else arr[in].push_back(i);
	}
	int M;
	cin >> M;
	int count = 0;
	q.push(start);
	visited[start] = 1;
	if (M == start) {
		cout << "0";
		return 0;
	}
	while (!q.empty()) {
		int curx = q.front();
		q.pop();
		if (arr[curx].empty()) count++;
		else for (int i = 0; i < arr[curx].size(); i++) {
			int tmpx = arr[curx][i];
			if (visited[tmpx])continue;
			if (tmpx == M) {
				if (arr[curx].size() == 1)count++;
				continue;
			}
			q.push(tmpx);
			visited[tmpx] = 1;
		}
	}
	cout << count;
}