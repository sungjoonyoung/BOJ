#include<iostream>
#include<queue>
#include<utility>
using namespace std;
bool visited[200002];
queue<pair<int, int>> q;


void BFS(int x, int y, int z);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	BFS(a, 0,b);
}
void BFS(int x, int y,int z) {
	visited[x] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		int soo = q.front().first;
		int step = q.front().second;
		q.pop();
		if (soo == z) {
			cout << step;
			return;
		}
		if (soo <= 50000 and visited[soo * 2] == 0) {
			visited[soo * 2] = 1;
			q.push({ soo * 2,step + 1 });
		}
		if (soo >= 1 and visited[soo - 1] == 0) {
			visited[soo -1] = 1;
			q.push({ soo - 1 , step + 1 });
		}
		if (soo <= 100000 and visited[soo + 1] == 0) {
			visited[soo +1] = 1;
			q.push({ soo + 1, step + 1 });
		}

	}
}