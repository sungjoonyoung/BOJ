#include<iostream>
using namespace std;
int x[1000000];
int y[1000000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M, many=0;
	cin >> N >> M;
	char ch;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> ch;
			if (ch == '#') {
				x[i]++;
				y[j]++;
				many++;
			}
		}
	}
	int maxx = 0, maxy = 0;
	for (int i = 0; i < N; i++) {
		if (maxx <= x[i])maxx = x[i];
	}
	for (int i = 0; i < M; i++) {
		if (maxy <= y[i])maxy= y[i];
	}
	many *= 2;
	many -= maxx + maxy;
	cout << many;
}