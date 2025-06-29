#include<iostream>
#include<vector>
using namespace std;
int map[40][40];
int sti[20][20];
int tmp[20][20];
int N, M, K;
int R, C;
bool find(int x, int y);
void tatch(int x, int y);
void turn(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M >> K;
	for (int i = 0; i < K; i++) {
		cin >> R >> C;
		for (int i = 0; i < R; i++)for (int j = 0; j < C; j++)cin >> sti[i][j];
		for (int n = 0; n < 4; n++) {
			int key = 1;
			for (int i = 0; i < N - R+1; i++)for (int j = 0; j < M - C+1; j++) {
				if (key == 0)break;
				if (find(i, j)) {
					tatch(i, j);
					key = 0;
					/*for (int i = 0; i < N; i++) {
						cout << "\n";
						for (int j = 0; j < M; j++)cout << map[i][j];
					}
					break;*/
				}
			}

			if (key == 0)break;
			turn();
		}
	}
	int answer = 0;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++)answer += map[i][j];
	cout << answer;
}
bool find(int x, int y) {
	for (int i = x; i < x+R; i++)for (int j = y; j <y+ C; j++) {
		if (map[i][j] == 1 and sti[i-x][j-y] == 1)return 0;
	}
	return 1;
}
void tatch(int x, int y) {
	for (int i = x; i < x + R; i++)for (int j = y; j < y + C; j++) {
		map[i][j] += sti[i - x][j - y];
	}
}
void turn(void) {
	for (int i = 0; i < R; i++)for (int j = 0; j < C; j++)tmp[i][j] = sti[i][j];
	for (int i = 0; i < R; i++)for (int j = 0; j < C; j++) sti[j][R-i-1] = tmp[i][j];
	swap(R, C);
	/*for (int i = 0; i < R; i++) {
		cout << "\n";
		for (int j = 0; j < C; j++) cout << sti[i][j];
	}*/
}