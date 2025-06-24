#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<long long> arr[4];
int ans[50001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= sqrt(50000); i++) {
		arr[0].push_back(i * i);
		ans[i * i] = 1;
	}
	for (int i = 0; i < arr[0].size(); i++)for (int j = i; j < arr[0].size(); j++) {
		long long tmp = arr[0][i] + arr[0][j];
		if (tmp > 50000)continue;
		if (ans[tmp])continue;
		arr[1].push_back(tmp);
		ans[tmp] = 2;
	}
	for (int i = 0; i < arr[0].size(); i++)for (int j = 0; j < arr[1].size(); j++) {
		long long tmp = arr[0][i] + arr[1][j];
		if (tmp > 50000)continue;
		if (ans[tmp])continue;
		arr[2].push_back(tmp);
		ans[tmp] = 3;
	}
	if (ans[N] == 0)cout << 4;
	else cout << ans[N];
}