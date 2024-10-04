#include<iostream>
#include<queue>
using namespace std;
struct cmp {
	bool operator () (int x, int y) {
		return x > y;
	}
};
priority_queue<int, vector<int>, cmp> pq;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		pq.push(in);
	}
	long long answer = 0;
	while (!pq.empty()) {
		long long a=pq.top();
		pq.pop();
		if (pq.empty())break;
		long long b=pq.top();
		pq.pop();
		answer += a + b;
		pq.push(a + b);
	}
	
	cout << answer;
}