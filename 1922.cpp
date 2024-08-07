#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct net{
	int a, b, w;
};
vector<net> v;
bool compare(net x,net y);
int find(int x);
void uni(int x, int y);
int P[1001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N;
	cin >> M;
	for (int i = 1; i <= N; i++) {
		P[i] = i;
	}
	for (int i = 0; i < M; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		v.push_back({ a,b,w });
	}

	sort(v.begin(), v.end(), compare);
	//cout << v.size() << "\n";
	int tw=0, count=0;
	for (int i = 0; i < M; i++){
		//cout << v[i].w << ' ' << v[i].a << ' ' << v[i].b << "\n";
		int tmpa = v[i].a;
		int tmpb = v[i].b;
		int tmpw = v[i].w;
		if (find(tmpa) == find(tmpb) or tmpa == tmpb)continue;
		uni(tmpa, tmpb);
		tw += tmpw;
		count++;
		//cout << tmpa<<" "<<tmpb << "\n";
		//if (count == N-1)break;
	}
	cout << tw;
}
bool compare(net x, net y) {
	return x.w < y.w;
}

int find(int x) {
	if (P[x] == x)return x;
	else return P[x] = find(P[x]);
}
void uni(int x, int y) {
	int mox = find(x);
	int moy = find(y);
	if (mox < moy)P[moy] = mox;
	else P[mox] = moy;
}