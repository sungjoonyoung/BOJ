#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<int> arr[100001];
queue<pair<int, int>> q;
int P[100001];
bool used[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	
	for (int i = 0; i < N-1; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
		if (a == 1) q.push({a, b});
		if (b == 1) q.push({ b, a });
	}
	used[1] = 1;
	while (!q.empty()) {
		int curhead = q.front().first;
		int curtail = q.front().second;
		q.pop();
		P[curtail] = curhead;
		used[curtail] = 1;
		if(!arr[curtail].empty())for (int i = 0; i < arr[curtail].size(); i++) {
			if (used[arr[curtail][i]])continue;
			q.push({ curtail , arr[curtail][i] });
		}
	}
	for (int i = 2; i <= N; i++)cout << P[i] << "\n";
}