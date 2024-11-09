#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> arr[300001];
int map[300001];
vector<int> out;
queue<pair<int,int>> s;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, K, X;
	cin >> N >> M >> K >> X;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		arr[from].push_back(to);
	}
	s.push({ X,0 });
	map[X] = 1;	
	while (!s.empty()) {
		int tmpx = s.front().first;
		int tmps = s.front().second;
		s.pop();
		if(!arr[tmpx].empty())for (int i = 0; i < arr[tmpx].size(); i++) {
			if (map[arr[tmpx][i]])continue;
			map[arr[tmpx][i]] = tmps + 1;
			s.push({ arr[tmpx][i] , tmps + 1 });
			if (tmps + 1 == K)out.push_back(arr[tmpx][i]);
		}
	}
	sort(out.begin(), out.end());
	if (out.empty()) cout << "-1";
	else for (int i = 0; i < out.size(); i++)cout << out[i] << "\n";
}