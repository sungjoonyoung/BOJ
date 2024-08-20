#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	while (N--) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	cout << v[K - 1];
}