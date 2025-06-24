#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100002];
long long L[100002];
long long R[100002];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	long long answer = -10'000'000'000;
	for (int i = 1; i <= N; i++)cin >> arr[i];
	for (int i = 1; i <= N; i++)L[i] = max(arr[i], L[i - 1] + arr[i]);
	for (int i = N; i >= 1; i--)R[i] = max(arr[i], R[i + 1] + arr[i]);
	if (N == 1) {
		cout << arr[1];
		return 0;
	}
	for (int i = 1; i <= N; i++) {
		answer = max({ answer, L[i - 1] + R[i + 1] ,L[i],R[i] });
	}
	cout << answer;
}