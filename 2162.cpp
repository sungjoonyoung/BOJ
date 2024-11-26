#include<iostream>
#include<vector>
using namespace std;
int met(int xc1, int yc1, int xc2, int yc2, int x, int y);
bool func(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4, int y_4);
int arr[4][3001];
int P[3001];
int many[3001];
void uni(int x, int y);
int find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> arr[0][i] >> arr[1][i] >> arr[2][i] >> arr[3][i];
	for (int i = 1; i <= N; i++)P[i] = i;
	if (N == 1) {
		cout << "1" << "\n" << "1";
		return 0;
	}
	for (int i = 1; i < N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if(P[i]!=P[j])if (func(arr[0][i], arr[1][i], arr[2][i], arr[3][i], arr[0][j], arr[1][j], arr[2][j], arr[3][j])) {
				uni(i, j);
			}
		}
	}
	for (int i = 1; i <= N; i++)many[find(i)]++;
	int maxnum = 0;
	int man = 0;
	for (int i = 1; i <= N; i++) {
		maxnum = max(maxnum, many[i]);
		if (many[i])man++;
	}
	cout << man << "\n" << maxnum;

}
int find(int x) {
	if (x == P[x])return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int tmpx = find(x);
	int tmpy = find(y);
	if (tmpx < tmpy)P[tmpy] = tmpx;
	else P[tmpx] = tmpy;
}
bool func(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4, int y_4) {
	int a = met(x_1, y_1, x_2, y_2, x_3, y_3);
	int b = met(x_1, y_1, x_2, y_2, x_4, y_4);
	int c = met(x_3, y_3, x_4, y_4, x_1, y_1);
	int d = met(x_3, y_3, x_4, y_4, x_2, y_2);
	//cout << a << " " << b << " " << c << " " << d << "\n";
	if (a == 0 and b == 0) {
		if (min(x_1, x_2) < min(x_3, x_4)) {
			return(max(x_1, x_2) >= min(x_3, x_4));
		}
		else if (min(x_1, x_2) > min(x_3, x_4)) {
			return(min(x_1, x_2) <= max(x_3, x_4));
		}
		else {
			if (max(x_1, x_2) != min(x_1, x_2))return 1;
			else if (min(y_1, y_2) < min(y_3, y_4)) {
				return (max(y_1, y_2) >= min(y_3, y_4));
			}
			else if (min(y_1, y_2) > min(y_3, y_4)) {
				return (min(y_1, y_2) <= max(y_3, y_4));
			}
			else return 1;
		}
	}
	else {
		return ((a != b) and (c != d));
	}
}
int met(int xc1, int yc1, int xc2, int yc2, int x, int y) {
	int tmpx1 = xc2 - xc1;
	int tmpy1 = yc2 - yc1;
	int tmpx2 = x - xc1;
	int tmpy2 = y - yc1;
	int result = (tmpx1 * tmpy2) - (tmpx2 * tmpy1);
	if (result > 0)return 1;
	else if (result < 0)return -1;
	else return 0;
}