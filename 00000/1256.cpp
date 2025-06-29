#include<iostream>
using namespace std;
int dpC[201][201];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 0; i < 201; i++) {
		dpC[i][i] = 1;
		dpC[i][0] = 1;
	}
	for (int i = 2; i < 201; i++)for (int j = 1; j < i; j++) {
		dpC[i][j] = dpC[i - 1][j - 1] + dpC[i - 1][j];
		if (dpC[i][j] > 1000000000)dpC[i][j] = 1'000'000'001;
	}
	if (dpC[N + M][N] < K) {
		cout << -1;
		return 0;
	}
	//cout << dpC[100][50];
	//K--;
	int tmpN = N;
	int tmpM = M;
	for (int i = 0; i < N + M; i++) {
		if (K - dpC[N + M - 1 - i][tmpN - 1] > 0) {
			cout << 'z';
			tmpM--;
			K -= dpC[N + M - 1 - i][tmpN - 1];
		}
		else {
			cout << 'a';
			tmpN--;
		}
	}
}
