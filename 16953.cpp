#include<iostream>
#include<queue>
#include<utility>
using namespace std;
queue<pair<long long, long long>> q;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long A, B;
	cin >> A >> B;
	q.push({ 0,A });
	bool key = 0;
	while (!q.empty()) {
		long long curw = q.front().first;
		long long curx = q.front().second;
		if (curx == B) {
			key = 1;
			cout << curw+1;
			break;
		}
		q.pop();
		long long tmpx = curx * 2;
		if (tmpx <= B)q.push({ curw + 1,tmpx });
		tmpx = curx * 10 + 1;
		if (tmpx <= B)q.push({ curw + 1,tmpx });
	}
	if (key == 0)cout << "-1";
}