#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
int func(void);
void clear(int x);
int arr[1001];
int req[1001];
vector<int> map[1001];
struct cmp {
public:
	bool operator()(pair<int, int> a, pair<int, int> b) {
		return a.first > b.first;
	}
};
priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) clear(func());
}
int func(void) {
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)cin >> arr[i];
	for (int i = 0; i < K; i++) {
		int from, to;
		cin >> from >> to;
		map[from].push_back(to);
		req[to]++;
	}
	for (int i = 1; i <= N; i++)if (req[i] == 0)pq.push({arr[i],i});
	int D;
	cin >> D;
	int answer = 0;
	while (!pq.empty()) {
		//if (pq.top().first > answer)answer = pq.top().second;
		int tmpf = pq.top().first;
		int tmps = pq.top().second;
		pq.pop();
		if (tmps == D) {
			cout << tmpf<<"\n";
			return N;
		}
		if(!map[tmps].empty())for (int i = 0; i < map[tmps].size(); i++) {
			req[map[tmps][i]]--;
			if (req[map[tmps][i]] == 0)pq.push({tmpf+arr[map[tmps][i]],map[tmps][i]});
		}
	}
}
void clear(int x) {
	if (!pq.empty())while (pq.size())pq.pop();
	for (int i = 0; i <= x; i++) {
		map[i].clear();
		arr[i] = 0;
		req[i] = 0;
	}
}