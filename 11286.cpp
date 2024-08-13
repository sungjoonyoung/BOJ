#include<iostream>
#include<queue>
using namespace std;

struct comque {
	bool operator()(int x, int y) {
		if (abs(x) == abs(y))return x > 0 and y < 0;
		else return abs(x) > abs(y);
	}
};
priority_queue<int, vector<int>, comque> q;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp == 0) {
			if (q.empty())cout << "0\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(tmp);
		}
	}
	
}