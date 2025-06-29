#include<iostream>
using namespace std;
int map[10001];
int val[101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	map[0] = 1;
	for (int i = 0; i < N; i++)cin >> val[i];
	for (int k = 0; k < N; k++) {
		for (int i = M; i >=0; i--) {
			for (int j = i; j >= 0; j -= val[k]) {
				if (j == i)continue;
				map[i] += map[j];
			}
		}
	}
	cout << map[M];
}