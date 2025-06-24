#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001][1001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int answer = 0;
	for (int i = 1; i <= N; i++)for (int j = 1; j <= M; j++) {
		char c;
		cin >> c;
		arr[i][j] = c - '0';
		if (arr[i][j])arr[i][j] = min({ arr[i - 1][j] ,arr[i - 1][j - 1],arr[i][j - 1] }) + 1;
		answer = max(answer, arr[i][j]);
	}
	cout << answer * answer;
}
