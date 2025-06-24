#include<iostream>
using namespace std;
int arr[25];
int sum = 0;
int answer = 0;
void func(int x, int N, int S);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++)cin >> arr[i];
	for (int i = 0; i < N; i++) {
		sum = arr[i];
		if (sum == S)answer++;
		if (i == N - 1)break;
		func(i, N, S);
	}
	cout << answer;
}
void func(int x, int N, int S) {
	if (x == N - 1)return;
	sum += arr[x+1];
	if (sum == S)answer++;
	func(x+1, N, S);
}