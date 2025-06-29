#include<iostream>
#include<cmath>
using namespace std;
int N,tmpN;
int arr[128][128];
int W = 0;
int B = 0;
int func(int x, int y, int N);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)cin >> arr[i][j];

	int x = 0;
	int y = 0;
	int a = func(x, y, N / 2);
	int b = func(x, y + N / 2, N / 2);
	int c = func(x + N / 2, y, N / 2);
	int d = func(x + N / 2, y + N / 2, N / 2);

	if (a != -1 and a == b and b == c and c == d) {
		if (a)cout << "0\n1";
		else cout << "1\n0";
		return 0;
	}
	else {
		if (a == 1)B++;
		else if (a == 0) W++;
		if (b == 1)B++;
		else if (b == 0) W++;
		if (c == 1)B++;
		else if (c == 0) W++;
		if (d == 1)B++;
		else if (d == 0) W++;
	}

	cout << W << "\n" << B;
}
int func(int x, int y, int N) {
	if (N == 1) {
		return arr[x][y];
	}
	int a = func(x, y, N / 2);
	int b = func(x, y + N / 2, N / 2);
	int c = func(x + N / 2, y, N / 2);
	int d = func(x + N / 2, y + N / 2, N / 2);
	if (a == b and b == c and c == d) {
		return a;
	}
	else {
		if (a == 1)B++;
		else if (a == 0) W++;
		if (b == 1)B++;
		else if (b == 0) W++;
		if (c == 1)B++;
		else if (c == 0) W++;
		if (d == 1)B++;
		else if (d == 0) W++;
		return -1;
	}
}