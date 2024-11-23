#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<string>
using namespace std;
vector<pair<int, string>> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		string str;
		cin >> str >> in;
		v.push_back({ in,str });
	}
	sort(v.begin(), v.end());
	cout << v.front().second;
}