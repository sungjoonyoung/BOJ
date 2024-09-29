#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
vector<int> duo;
bool find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)for (int j = 0; j < v.size(); j++)duo.push_back(v[i] + v[j]);
	sort(duo.begin(), duo.end());
	bool key = 1;
	for (int i = v.size() - 1; i > -1; i--){
		if (!key)break;
		for (int j = i; j > -1; j--) {
			if (find(v[i] - v[j])) {
				cout << v[i];
				key = 0;
				break;
			}
		}
	}
}
bool find(int x) {
	int beg = 0;
	int end = duo.size() - 1;
	while (beg + 1 != end) {
		int mid = (beg + end) / 2;
		if (duo[mid] == x)return 1;
		else if (duo[mid] < x)beg = mid;
		else if (duo[mid] > x)end = mid;
	}
	if (duo[beg] == x)return 1;
	if (duo[end] == x)return 1;
	return 0;
}