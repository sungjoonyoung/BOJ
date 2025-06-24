#include<iostream>
using namespace std;
long long arr[10000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	long long answer = 0;
	for (int i = 0; i < N; i++)cin >> arr[i];
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++)answer += abs(arr[i] - arr[j]);
	}
	cout << answer*2;
}