#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	int beg = 0, end = 0,answer=1000000000*2+5;
	while (beg!=v.size()-1) {
		if (end < v.size() - 1 and v[end] - v[beg] < M) end++;
		else if (v[end] - v[beg] >= M) {
			answer = min(answer, v[end] - v[beg]);
			beg++;
		}
		else break;
	}
	cout << answer;
}