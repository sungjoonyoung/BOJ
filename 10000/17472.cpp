#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
using namespace std;
int arr[10][10];
bool visited[10][10];
int N, M;
struct struc {
	int w, x, y;
};
struct cmp {
	bool operator()(struct struc x, struct struc y) {
		return x.w > y.w;
	}
};
priority_queue<struct struc, vector<struct struc>, cmp> bridgeq;
int P[7];
void BFS(int x, int y, int island);
void tfind(int x, int y);
int find(int x);
void uni(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++)cin >> arr[i][j];
	int island = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] and !visited[i][j]) {
				island++;
				BFS(i, j, island);
			}
		}
	}
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}*/
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j]) {
				tfind(i, j);
			}
		}
	}
	for (int i = 1; i <= island; i++)P[i] = i;
	int count = 0;
	int answer = 0;
	while (count < island-1) {
		if (bridgeq.empty()) {
			cout << -1;
			return 0;
		}
		int curw = bridgeq.top().w;
		int curx = bridgeq.top().x;
		int cury = bridgeq.top().y;
		bridgeq.pop();
		if (find(curx) == find(cury))continue;
		//cout << curw << " " << curx << " " << cury<<"\n";
		uni(curx, cury);
		answer += curw;
		count++;
	}
	cout << answer;
}
int find(int x) {
	if (P[x] == x)return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int px = find(x);
	int py = find(y);
	if (px < py)P[py] = px;
	else P[px] = py;
}
void tfind(int x, int y) {
	int s = arr[x][y];
	int tmpx, tmpy, w;
	tmpx = x + 1;
	tmpy = y;
	w = 0;
	while (tmpx < N and !arr[tmpx][tmpy]){
		tmpx++;
		w++;
	}
	if (w!= 1 and tmpx < N and arr[tmpx][tmpy] != s and arr[tmpx][tmpy])bridgeq.push({ w,s,arr[tmpx][tmpy]});

	tmpx = x - 1;
	tmpy = y;
	w = 0;
	while (tmpx >=0 and!arr[tmpx][tmpy]) {
		tmpx--;
		w++;
	}
	if (w != 1 and tmpx >= 0 and arr[tmpx][tmpy] != s and arr[tmpx][tmpy])bridgeq.push({ w,s,arr[tmpx][tmpy] });

	tmpx = x;
	tmpy = y+1;
	w = 0;
	while (tmpy < M and !arr[tmpx][tmpy]) {
		tmpy++;
		w++;
	}
	if (w != 1 and tmpy < M and arr[tmpx][tmpy] != s and arr[tmpx][tmpy])bridgeq.push({ w,s,arr[tmpx][tmpy] });

	tmpx = x;
	tmpy = y-1;
	w = 0;
	while (tmpy >= 0 and !arr[tmpx][tmpy]) {
		tmpy--;
		w++;
	}
	if (w != 1 and tmpy >= 0 and arr[tmpx][tmpy] != s and arr[tmpx][tmpy])bridgeq.push({ w,s,arr[tmpx][tmpy] });
}
void BFS(int x, int y, int island) {
	queue<pair<int,int>> q;
	int dx[4] = { 0,0,1,-1 };
	int dy[4] = { 1,-1,0,0 };
	q.push({ x, y });
	visited[x][y] = 1;
	arr[x][y] = island;
	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			if (!arr[tmpx][tmpy])continue;
			if (visited[tmpx][tmpy])continue;
			if (tmpx < 0 or tmpx >= N or tmpy < 0 or tmpy >= M)continue;
			q.push({ tmpx,tmpy });
			visited[tmpx][tmpy]=1;
			arr[tmpx][tmpy] = island;
		}
	}
}