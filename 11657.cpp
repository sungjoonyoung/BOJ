#include<iostream>
#include<vector>
#include<climits>
using namespace std;
struct struc {
	int from, to, w;
};
vector<struct struc> v;
long long arr[501];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 2; i <= N; i++)arr[i] = INT_MAX;
	for (int i = 0; i < M; i++) {
		int from, to, w;
		cin >> from >> to >> w;
		v.push_back({ from,to,w });
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < v.size(); j++) {
			int tmpfrom = v[j].from;
			int tmpto = v[j].to;
			int tmpw = v[j].w;
			if (arr[tmpfrom] == INT_MAX)continue;
			if (arr[tmpfrom] + tmpw < arr[tmpto])arr[tmpto] = arr[tmpfrom] + tmpw;
		}
	}
	bool key = 0;
	for (int j = 0; j < v.size(); j++) {
		int tmpfrom = v[j].from;
		int tmpto = v[j].to;
		int tmpw = v[j].w;
		if (arr[tmpfrom] == INT_MAX)continue;
		if (arr[tmpfrom] + tmpw < arr[tmpto])key = 1;
	}
	if (key) {
		cout << "-1";
		return 0;
	}
	for (int i = 2; i <= N; i++) {
		if (arr[i] == INT_MAX)cout << "-1\n";
		else cout << arr[i] << "\n";
	}
}