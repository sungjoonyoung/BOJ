#include<iostream>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;
vector<pair< double, double>> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, W, H;
	cin >> N >> W >> H;
	v.resize(N);
	for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
	int count = 0;
	for (int a = 0; a < N; a++)for (int b = 0; b < N; b++){
		if (a == b)continue;
		double O1r = hypot(v[a].first - v[b].first, v[a].second - v[b].second);
		if (v[a].first - O1r<0 or v[a].first + O1r>W)continue;
		if (v[a].second - O1r<0 or v[a].second + O1r>H)continue;
		for (int c = 0; c < N; c++)for (int d = 0; d < N; d++) {
			if (a == c or a == d or b == c or b == d or c == d)continue;
			double O2r = hypot(v[c].first - v[d].first, v[c].second - v[d].second);
			if (v[c].first - O2r<0 or v[c].first + O2r>W)continue;
			if (v[c].second - O2r<0 or v[c].second + O2r>H)continue;
			if (O1r > O2r)continue;
			double dis = hypot(v[a].first - v[c].first, v[a].second - v[c].second);
			if (O1r + dis < O2r - 1e-12)count++;
		}
	}
	cout << count;
}
