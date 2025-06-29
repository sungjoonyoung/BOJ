#include<iostream>
#include<queue>
#include<utility>
using namespace std;
queue<pair<int, int>> q;
bool visited[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	int tmpN = N;
	if (tmpN == 0) {
		q.push({ tmpN,0 });
		visited[tmpN] = 1;
	}
	else if (N != 0)while (tmpN <= 100000) {
		q.push({ tmpN,0 });
		visited[tmpN] = 1;
		tmpN *= 2;
	}
	while (!q.empty()) {
		int curx = q.front().first;
		int curt = q.front().second;
		q.pop();
		if (curx == K) {
			cout << curt;
			break;
		}
		int tmpx = curx + 1;
		while (tmpx <= 100000) {
			if(!visited[tmpx]){
				q.push({ tmpx, curt + 1 });
				visited[tmpx] = 1;
			}
			tmpx *= 2;
		}
		tmpx = curx - 1;
		if (tmpx == 0 and !visited[tmpx]) {
			q.push({ tmpx,curt + 1 });
			visited[tmpx] = 1;
		}
		else if (tmpx > 0)while (tmpx <= 100000) {
			if (!visited[tmpx]) {
				q.push({ tmpx, curt + 1 });
				visited[tmpx] = 1;
			}
			tmpx *= 2;
		}
	}
}