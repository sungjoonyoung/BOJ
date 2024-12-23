#include<iostream>
#include<climits>
using namespace std;
int arr[101][101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int m;
	cin >> m;
	for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++) {
		if (i == j)continue;
		arr[i][j] = INT_MAX / 2;		
	}
	for (int i = 0; i < m; i++) {
		int s, e, w;
		cin >> s >> e >> w;
		arr[s][e] = min(arr[s][e], w);
	}
	for (int k = 1; k <= n; k++)for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++) {
		arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == INT_MAX / 2)cout << "0 ";
			else cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}