#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
using namespace std;
vector<pair<int, int>> v;
multiset<int> ms;
bool compare(pair<int, int> x, pair<int, int> y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int M, V;
		cin >> M >> V;
		v.push_back({ M,V });
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < K; i++) {
		int C;
		cin >> C;
		ms.insert(C);
	}

	long long answer = 0;
	for (int i = 0; i < v.size(); i++) {
		if (ms.empty())break;
		if (v[i].first > *prev(ms.end()))continue;
		auto tmp = ms.find(v[i].first);
		if (tmp == ms.end())tmp = ms.upper_bound(v[i].first);
		//if (tmp == ms.end())continue;
		answer += v[i].second;
		ms.erase(tmp);
	}
	cout << answer;
}
bool compare(pair<int, int> x, pair<int, int> y) {
	if (x.second != y.second)return x.second > y.second;
	else x.first < y.first;
}