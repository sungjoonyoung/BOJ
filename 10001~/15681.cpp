#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
vector<int> arr[100001];
queue<int> q;
int out[100001];
int many[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, R, Q;
	cin >> N >> R >> Q;
	for (int i = 0; i < N - 1; i++) {
		int U, V;
		cin >> U >> V;
		arr[U].push_back(V);
		arr[V].push_back(U);
	}
	//tkfkdgo
	for (int i = 1; i <= N; i++)if (arr[i].size() == 1 and i!=R) {
		q.push(i);
		out[i] = 1;
	}
	while (!q.empty()) {
		int curx = q.front();
		q.pop();
		if (curx == R)continue;
		for (int i = 0; i < arr[curx].size(); i++) {
			int tmpx = arr[curx][i];
			if (tmpx!= R and many[tmpx] == arr[tmpx].size() - 1)continue;
			if (tmpx == R and many[tmpx] == arr[tmpx].size())continue;
			many[tmpx]++;
			out[tmpx] += out[curx];
			if (tmpx!=R and many[tmpx] == arr[tmpx].size() - 1) {
				q.push(tmpx);
				out[tmpx]++;
			}
			else if (tmpx == R and many[tmpx] == arr[tmpx].size()) {
				q.push(tmpx);
				out[tmpx]++;
			}
		}
	}
	//out[R]++;
	//cout << out[6] << "A";
	for (int i = 0; i < Q; i++) {
		int in;
		cin >> in;
		cout << out[in]<< "\n";
	}
}