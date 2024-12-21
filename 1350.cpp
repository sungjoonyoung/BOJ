#include<iostream>
#include<vector>
using namespace std;
vector<long long> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		long long in;
		cin >> in;
		v.push_back(in);
	}
	long long C;
	cin >> C;
	long long answer = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0)continue;
		answer += ((v[i] - 1) / C + 1) * C;
	}
	cout << answer;
}