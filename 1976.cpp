#include<iostream>
using namespace std;
int P[201];
int find(int x);
void uni(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)P[i] = i;
	for (int i = 1; i <= N; i++)for (int j = 1; j <= N; j++) {
		bool in;
		cin >> in;
		if (in)uni(i, j);
	}
	int answer;
	cin >> answer;
	answer = find(answer);
	if(M!=1)for (int i = 0; i < M-1; i++) {
		int in;
		cin >> in;
		if (answer != find(in)) {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
int find(int x) {
	if (x == P[x])return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int px = find(x);
	int py = find(y);
	if (px >= py)P[px] = py;
	else P[py] = px;
}