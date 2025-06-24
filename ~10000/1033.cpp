#include<iostream>
#include<vector>
using namespace std;
long long arr[10][10];
vector<long long> v[10];
void DFS(int x);
long long Low(int x, int y);
long long answer = 1;
long long out[10];
long long dojun(long long x, long long y);
bool visited[10];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int start = -1;
	for (int i = 0; i < N-1; i++) {
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		if (start == -1)start = a;
		arr[a][b] = p;
		arr[b][a] = q;
		v[a].push_back(b);
		v[b].push_back(a);
		answer *= Low(p, q);
	}
	//cout << answer<<" ";
	out[start] = answer;
	DFS(start);
	long long tmp = out[0];
	for (int i = 0; i < N; i++)tmp = dojun(max(out[i], tmp), min(out[i], tmp));
	
	for (int i = 0; i < N; i++)cout << out[i]/tmp << " ";
}
void DFS(int x) {
	visited[x] = 1;
	if (!v[x].empty())for (int i = 0; i < v[x].size(); i++) {
		if (visited[v[x][i]])continue;
		out[v[x][i]]= out[x] * arr[v[x][i]][x] / arr[x][v[x][i]];
		DFS(v[x][i]);
	}
}
long long Low(int x, int y) {
	if (x < y)swap(x, y);
	int tmpx = x;
	int tmpy = y;
	int tmpm = tmpx % tmpy;
	while (tmpm != 0) {
		tmpx = tmpy;
		tmpy = tmpm;
		tmpm = tmpx % tmpy;
	}
	//cout << x << " " << y << " " << tmpy << "\n";
	return x * y / tmpy;
}
long long dojun(long long x, long long y) {
	if (y == 0)return x;
	else {
		return dojun(y, x % y);
	}
}