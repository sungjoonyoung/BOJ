#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int P[100001];
struct MyStruct
{
	int w, x, y;
};
vector<struct MyStruct> v;
bool cmp(struct MyStruct x, struct MyStruct y) {
	return x.w > y.w;
}
int find(int x);
void uni(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y, w;
		cin >> x >> y >> w;
		v.push_back({ w,min(x,y),max(x,y) });
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 1; i <= N; i++)P[i] = i;

	int answer = 0;
	int count = 0;
	int curw, curx, cury;
	while (!v.empty()) {
		curw = v.back().w;
		curx = v.back().x;
		cury = v.back().y;
		v.pop_back();
		if (find(curx)==find(cury))continue;

		count++;
		if (count == N - 1)break;
		answer += curw;
		uni(curx, cury);
	}
	cout << answer;
}

int find(int x) {
	if (P[x] == x)return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int px = find(x);
	int py = find(y);
	if (py < px)P[py] = px;
	else P[px] = py;
}