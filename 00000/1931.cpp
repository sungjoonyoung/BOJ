#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<int, int>> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, end, begin;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> begin >> end;
		v.push_back({ end, begin });
	}
	sort(v.begin(), v.end());
	int dead = 0, ans =0;
	for (int i = 0; i < N; i++) {
		if (v[i].second >= dead) {
			ans++;
			dead = v[i].first;
		}
	}
	cout << ans;
}