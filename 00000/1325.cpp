#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> arr[10001];
bool visited[10001];
vector<int> out;
int arrout[10001];
int N, M;
queue<int> q;
int BFS(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> to >> from;
		arr[from].push_back(to);
	}
	for (int i = 1; i <= N; i++) {
		q.push(i);
		visited[i] = 1;
		arrout[i] = BFS(i);
		for (int j = 0; j < N; j++)visited[j+1] = 0;
	}
	int maxnum = 0;
	for (int i = 1; i <= N; i++) {
		if (maxnum < arrout[i]) {
			out.clear();
			maxnum = arrout[i];
			out.push_back(i);
		}
		else if (maxnum == arrout[i])out.push_back(i);
	}
	sort(out.begin(), out.end());
	for (int i = 0; i < out.size(); i++)cout << out[i] << " ";
}
int BFS(int x) {
	int count = 0;
	while(!q.empty()){
		int tmpx = q.front();
		q.pop();
		if (!arr[tmpx].empty())for (int i = 0; i < arr[tmpx].size(); i++) {
			if (visited[arr[tmpx][i]])continue;
			count++;
			visited[arr[tmpx][i]] = 1;
			q.push(arr[tmpx][i]);
		}
	}
	return count;
}