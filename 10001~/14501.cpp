#include<iostream>
using namespace std;
int arr[2][16];
int N;
int answer=0;
void dfs(int x, int w);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> arr[0][i] >> arr[1][i];
	dfs(1, 0);
	cout << answer;
}
void dfs(int x, int w) {
	if (x == N + 1) {
		answer = max(answer, w);
		return;
	}
	if (x + arr[0][x] > N+1)answer = max(answer, w);
	else dfs(x + arr[0][x], w + arr[1][x]);
	dfs(x + 1, w);
}