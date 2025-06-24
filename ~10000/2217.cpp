#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
bool compare(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, in;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> in;
		v.push_back(in);
	}
	long long answer = 0;
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		long long tmp = v[i] * (i + 1);
		answer = max(answer, tmp);
	}
	cout << answer;
}
bool compare(int x, int y) {
	return x > y;
}