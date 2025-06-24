#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<int, int>> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		v.push_back({ tmp,i });
	}
	sort(v.begin(), v.end());
	int max = 0;
	for (int i = 0; i < v.size(); i++) {
		if (max < v[i].second - i)max = v[i].second - i;
	}
	cout << max + 1;
}