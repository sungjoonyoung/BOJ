#include<iostream>
#include<string>
using namespace std;
int x[500];
int y[500];
int arr[500][500];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		string str;
		cin >> str;
		for (auto a : str) {
			if (a == '9') {
				x[i]++;
				y[j]++;
				arr[i][j]++;
			}
		}
	}
	int maxnum = 0;
	int maxind = 0;
	int xy;
	for (int i = 0; i < N; i++)if (maxnum < x[i]) {
		maxnum = x[i];
		maxind = i;
		xy = 1;
	}
	for (int i = 0; i < M; i++)if (maxnum < y[i]) {
		maxnum = y[i];
		maxind = i;
		xy = 2;
	}
	long long count = 0;
	if (xy == 1)for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		if (i == maxind)continue;
		count += arr[i][j];
	}
	if (xy == 2)for (int i = 0; i < N; i++)for (int j = 0; j < M; j++) {
		if (j == maxind)continue;
		count += arr[i][j];
	}
	cout << count;
}