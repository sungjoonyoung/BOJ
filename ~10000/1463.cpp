#include<iostream>
#include<queue>
#include<utility>
using namespace std;
queue<pair<int, int>> q;

void BFS(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	BFS(N,0);
}
void BFS(int x, int y) {
	q.push({ x,y });
	
	while (!q.empty()) {
		
		int cur = q.front().first;
		int min = q.front().second;
		q.pop();
		if (cur == 1) {
			cout << min;
			return;
		}
		if (cur % 3 == 0) {
			q.push({ cur / 3,min + 1 });
		}
		if (cur % 2 == 0) {
			q.push({ cur / 2,min + 1 });
		}
		if (cur > 1) {
			q.push({ cur - 1,min + 1 });
		}
	}

}