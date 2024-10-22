#include<vector>
#include<iostream>
using namespace std;
char prv[50][50];
int nxt[50][50];
int map[50][50];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	char in;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) cin >> prv[i][j];
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		cin >> in;
		map[i][j] = (prv[i][j] != in);
	}
	int answer = 0;

	if (N < 3 or M < 3) {
		for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				cout << "-1";
				return 0;
			}
		}
		cout << "0";
		return 0;
	}
	else for (int i = 0; i < N-2; i++)for (int j = 0; j < M-2; j++) {
		if (map[i][j]) {
			answer++;
			for (int di = 0; di < 3; di++)for (int dj = 0; dj < 3; dj++) {
				if (map[i + di][j + dj])map[i + di][j + dj] = 0;
				else map[i + di][j + dj] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) if (map[i][j]) {
		cout << "-1";
		return 0;
	}
	cout << answer;
}