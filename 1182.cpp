#include<iostream>
using namespace std;
int arr[20];
bool used[20];
void func(int before, int x, int y, int N, int S);
int sum = 0;
int answer = 0;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++)cin >> arr[i];

	for (int i = 1; i <= N; i++) { // 부분 집합의 크기
		for (int j = 0; j < N; j++) {
			if (used[j] == 1)continue;
			sum += arr[j];
			used[j] = 1;
			func(j, 1, i, N, S);
			sum -= arr[j];
			used[j] = 0;
		}
	}
	cout << answer;
}
void func(int before, int x, int y, int N, int S) {
	
	if (x == y) {
		if (sum == S) {
			answer++;
			return;
		}
		return;
	}
	if (before == N - 1)return;
	for (int j = before+1; j < N; j++) {
		if (used[j] == 1)continue;
		sum += arr[j];
		used[j] = 1;
		func(j, x+1, y, N, S);
		sum -= arr[j];
		used[j] = 0;
	}
}