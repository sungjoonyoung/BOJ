#include<iostream>
#include<queue>
using namespace std;
struct struc {
	int z, x, y, w;
};
queue<struct struc> q;
int arr[100][100][100];
bool visited[100][100][100];
int dx[6] = { 0,0,1,-1,0,0 };
int dy[6] = { 1,-1,0,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, H;
	cin >> M >> N >> H;
	int zero = 0;
	for (int i = 0; i < H; i++)for (int j = 0; j < N; j++)for (int k = 0; k < M; k++) {
		int in;
		cin >> in;
		if (in == 1) {
			q.push({ i,j,k,0 });
			visited[i][j][k] = 1;
			arr[i][j][k] = in;
		}
		if (in == 0) {
			arr[i][j][k] = in;
			zero++;
		}
		else arr[i][j][k] = in;
	}
	int answer = 0;
	while (!q.empty()) {
		int curx = q.front().x;
		int cury = q.front().y;
		int curz = q.front().z;
		int curw = q.front().w;
		answer = max(curw, answer);
		q.pop();
		for (int i = 0; i < 6; i++) {
			int tmpx = curx + dx[i];
			int tmpy = cury + dy[i];
			int tmpz = curz + dz[i];
			if (visited[tmpz][tmpx][tmpy])continue;
			if (tmpx < 0 or tmpy < 0 or tmpz < 0 or tmpz >= H or tmpy >= M or tmpx >= N)continue;
			if (arr[tmpz][tmpx][tmpy] == -1)continue;
			arr[tmpz][tmpx][tmpy] = 1;
			visited[tmpz][tmpx][tmpy] = 1;
			q.push({ tmpz,tmpx,tmpy,curw + 1 });
			zero--;
		}
	}
	/*for (int i = 0; i < H; i++)for (int j = 0; j < N; j++){
		for (int k = 0; k < M; k++) {
			cout << arr[i][j][k];
		}
		cout << "\n";
	}*/
	if (zero)cout << "-1";
	else cout << answer;
}