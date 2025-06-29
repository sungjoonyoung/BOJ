#include<iostream>
#include<queue>
#include<vector>
using namespace	std;
struct struc {
	int w, a, b;
};
struct cmp {
	bool operator()(struct struc x, struct struc y) {
		return x.w > y.w;
	}
};
priority_queue<struct struc, vector<struct struc>, cmp> pq;
int P[50];
int find(int x) {
	if (P[x] == x)return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int px = find(x);
	int py = find(y);
	if (px < py)P[px] = py;
	else P[py] = px;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) {
		char c;
		cin >> c;
		if (c == '0')continue;
		else if ('a' <= c and c <= 'z') {
			pq.push({ c - 'a' + 1,i,j });
			answer += c - 'a' + 1;
		}
		else {
			pq.push({ c - 'A' + 27,i,j });
			answer += c - 'A' + 27;
		}
	}
	for (int i = 0; i < N; i++)P[i] = i;
	int count = 0;
	while (count < N-1) {
		if (pq.empty()) {
			cout << -1;
			return 0;
		}
		int tmpw = pq.top().w;
		int tmpa = pq.top().a;
		int tmpb = pq.top().b;
		pq.pop();
		if (find(tmpa) == find(tmpb))continue;
		answer -= tmpw;
		count++;
		uni(tmpa, tmpb);
	}
	cout << answer;
}