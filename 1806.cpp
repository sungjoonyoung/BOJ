#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,S;
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	int answer = 100000 + 5, tmp =0;
	int idx1 = 0, idx2 = 0;
	tmp = v[0];
	while (1) {
		if (idx2 < v.size() - 1 and tmp < S) {
			idx2++;
			tmp += v[idx2];
		}
		else if (tmp >= S) {
			answer = min(answer, idx2 - idx1 + 1);
			tmp -= v[idx1];
			idx1++;
		}
		else break;
	}
	if (answer == 100000 + 5) cout << "0";
	else cout << answer;
}