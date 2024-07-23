#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, tmp;
	long long tmpsum = 0;
	cin >> N;
	while (N--) {
		cin >> tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		tmpsum += v[i] * (v.size() - i);
	}
	cout << tmpsum;
}