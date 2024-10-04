#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct cmp
{
	bool operator()(int x, int y) {
		return x > y;
	}
};
priority_queue<int, vector<int>, cmp> pq;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--)
	{
		int in;
		cin >> in;
		if (in == 0) {
			if (pq.empty())cout << "0\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(in);
		}
	}
}