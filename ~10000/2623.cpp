#include<iostream>
#include<vector>
using namespace std;
vector<int> arr[1001];
int man[1001];
vector<int> v;
vector<int> out;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int T;
		cin >> T;
		int from;
		cin >> from;
		for (int j = 1; j < T; j++) {
			int to;
			cin >> to;
			arr[from].push_back(to);
			man[to]++;
			from = to;
		}
	}
	for (int i = 1; i <= N; i++)if (man[i] == 0) {
		v.push_back(i);
		out.push_back(i);
	}
	while (!v.empty()) {
		int cur = v.back();
		v.pop_back();
		if (!arr[cur].empty())for (int i = 0; i < arr[cur].size(); i++) {
			man[arr[cur][i]]--;
			if (man[arr[cur][i]] == 0) {
				v.push_back(arr[cur][i]);
				out.push_back(arr[cur][i]);
			}
		}
	}
	if (out.size() == N)for (int i = 0; i < out.size(); i++)cout << out[i] << "\n";
	else cout << "0";