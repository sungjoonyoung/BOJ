#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arr[2000];
bool used[2000];
void func(int x, int count);
int N, M;
bool answer = 0;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	bool key = 1;
	for (int i = 0; i < N; i++) {
		used[i] = 1;
		func(i, 0);
		used[i] = 0;
		if (answer) { cout << "1"; key = 0; break; }
		for (int i = 0; i < N; i++)used[i] = 0;
	}
	if (key)cout << "0";
}
void func(int x, int count) {
	if (count == 4) {
		answer = 1;
		return;
	}
	if (!arr[x].empty())for (int i = 0; i < arr[x].size(); i++) {
		if (used[arr[x][i]])continue;
		used[arr[x][i]] = 1;
		func(arr[x][i], count + 1);
		used[arr[x][i]] = 0;
	}
}