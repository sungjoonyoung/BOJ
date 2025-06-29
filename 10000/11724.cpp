#include<iostream>
#include<vector>
using namespace std;
vector<int> arr[1001];
bool used[1001];
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	int answer = 0;
	for (int i = 1; i <= N; i++) {
		if (used[i])continue;
		v.push_back(i);
		used[i] = 1;
		answer++;
		while(!v.empty()){
			int tmp = v.back();
			v.pop_back();
			for (int j = 0; j < arr[tmp].size(); j++) {
				if (used[arr[tmp][j]])continue;
				v.push_back(arr[tmp][j]);
				used[arr[tmp][j]] = 1;
			}
		}
	}
	cout << answer;
}