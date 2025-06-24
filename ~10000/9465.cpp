#include<iostream>
#include<algorithm>
using namespace std;
int arr[2][100000];
void func(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--)func();
}
void func(void) {
	int N, answer=-100;
	cin >> N;
	for (int i = 0; i < 2; i++)for (int j = 0; j < N; j++)cin >> arr[i][j];
	if (N >= 3) {
		arr[1][1] += arr[0][0];
		arr[0][1] += arr[1][0];
		for (int i = 2; i < N; i++) {
			arr[0][i] += max({ arr[1][i - 1], arr[0][i - 2], arr[1][i - 2] });
			arr[1][i] += max({ arr[0][i - 1], arr[0][i - 2], arr[1][i - 2] });
		}
	}
	else if (N == 2) {
		arr[0][1] += arr[1][0];
		arr[1][1] += arr[0][0];
	}
	for (int i = 0; i < 2; i++)for (int j = 0; j < N; j++)answer = max(answer, arr[i][j]);
	cout << answer<<"\n";
}