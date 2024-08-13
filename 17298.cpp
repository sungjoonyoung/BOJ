#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<pair<int, int>> s;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		while (1) {
			if (!s.empty() and tmp > s.back().second) {
			v[s.back().first] = tmp;
			s.pop_back();
			}
			else break;
		}
		v.push_back(-1);
		s.push_back({ i,tmp });
	}
	for (int i = 0; i < N; i++)cout << v[i] << " ";
}