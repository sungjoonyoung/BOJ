#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int, int>> in;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, x, y;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		in.push_back({ y,x });
	}
	sort(in.begin(), in.end());
	for (int i = 0; i < N; i++) {
		cout << in[i].second << " " << in[i].first << "\n";
	}
}