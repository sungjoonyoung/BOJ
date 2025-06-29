#include<iostream>
using namespace std;
int map[6][20][20];
int tmp[20][20];
int N, answer = 0, acount = 0;
void func(int x);
void copy(int x);
void getdown(int x);
void roll(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)cin >> map[0][i][j];
	func(0);
	cout << answer;
}
void func(int x) {
	if (x == 5) {
		for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) {
			if (answer < map[x][i][j])answer = map[x][i][j];
		}
		acount++;
		return;
	}
	for (int i = 0; i < 4; i++) {
		copy(x);
		for(int j=0;j<i;j++)roll(x+1);
		getdown(x + 1);
		func(x + 1);
	}
	/*copy(x);
	
	getdown(x + 1);
	func(x + 1);*/
}
void copy(int x) {
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)map[x+1][i][j] = map[x][i][j];
}
void getdown(int x) {
	for (int i = 0; i < N; i++) {
		int idx = 0;
		for (int j = 0; j < N; j++) {
			if (map[x][i][j] == 0)continue;
			if(idx==0 and tmp[i][idx] == 0)tmp[i][idx] = map[x][i][j];
			else if (tmp[i][idx] == map[x][i][j]) {
				tmp[i][idx] *= 2;
				idx++;
			}
			else {
				if (tmp[i][idx]!=0)idx++;
				tmp[i][idx] = map[x][i][j];
			}
			
		}
		for (int j = 0; j < N; j++)map[x][i][j] = tmp[i][j];
		//for (int j = 0; j < N; j++)cout<< tmp[i][j];
		for (int j = 0; j < N; j++)tmp[i][j] = 0;
	}
	/*for (int i = 0; i < N; i++) {
		cout << "\n";
		for (int j = 0; j < N; j++)cout << map[x][i][j] << " ";
	}*/
}
void roll(int x) {
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)tmp[i][j] = map[x][i][j];
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)map[x][j][N-i-1] = tmp[i][j];
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)tmp[i][j] = 0;
	return;
}