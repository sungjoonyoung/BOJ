#include<iostream>
#include<deque>
#include<utility>
using namespace std;
deque<pair<int, int>> q;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, L;
	cin >> N >> L;
	int tmp;
	cin >> tmp;
	q.push_back({ 0,tmp });
	cout << tmp<<" ";
	for (int i = 1; i < N; i++) {
		cin >> tmp;
		if (q.front().first == i - L)q.pop_front();
		while (q.size() != 0) {
			if (tmp < q.back().second) q.pop_back();
			else break;
		}
		
		q.push_back({ i,tmp });
		cout << q.front().second<<" ";
	}
}