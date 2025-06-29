#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct cmp{
	bool operator()(int a, int b) {
		return a > b;
	}
};
priority_queue<int,vector<int>,cmp> pq;
int many[32001];
vector<int> arr[32001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		many[to]++;
		arr[from].push_back(to);
	}
	for (int i = 1; i <= N; i++) {
		if (many[i] == 0)pq.push(i);
	}
	while (!pq.empty()) {
		int tmp = pq.top();
		pq.pop();
		cout << tmp << " ";
		if (!arr[tmp].empty())for (int i = 0; i < arr[tmp].size(); i++) {
			many[arr[tmp][i]]--;
			if (many[arr[tmp][i]] == 0) {
				pq.push(arr[tmp][i]);
			}
		}
	}
}