#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, a, b, ans = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		v.push_back(a + b);
		ans -= max(a, b);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N/2; i++) {
		ans += v[i];
	}
	cout << ans;
}