#include<iostream>
using namespace std;
int P[100001];
int find(int x);
void uni(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> P[i + 1];
	}
}
int find(int x) {
	if (x == P[x])return x;
	else return P[x]=find(P[x]);
}
void uni(int x, int y) {
	int xp = find(x);
	int yp = find(y);
	if (xp < yp)P[yp] = xp;
	else P[xp] = yp;
}