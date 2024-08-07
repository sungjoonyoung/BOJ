#include<iostream>
#include<vector>
using namespace std;
int P[51];
void uni(int x, int y);
int find(int x);
vector<vector<int>> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M, know;
	cin >> N >> M;
	cin >> know;
	if(know>0) while (know--) {
		int tmp;
		cin >> tmp;
		P[tmp] = -1;
	}
	for (int i = 0; i <= N; i++) {
		if (P[i] != -1)P[i] = i;
	}
	for (int i = 0; i < M; i++) {
		v.push_back(vector<int>());
		int many;
		cin >> many;
		int tmpman;
		cin >> tmpman;
		v[i].push_back(tmpman);
		if(many>0)for (int j = 0; j < many-1; j++) {
			int nextman;
			cin >> nextman;
			uni(tmpman, nextman);
			v[i].push_back(nextman);
		}
	}
	int count = M;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (find(v[i][j]) == -1) {
				count--;
				break;
			}
		}
	}
	cout << count;
}
void uni(int x, int y) {
	int tmpx = find(x);
	int tmpy = find(y);
	if (tmpx == -1)P[tmpy] = -1;
	else if (tmpy == -1)P[tmpx] = -1;

	if (tmpx < tmpy)P[tmpy] = tmpx;
	else if (tmpy < tmpx)P[tmpx] = tmpy;
}
int find(int x) {
	if (P[x] == x)return x;
	if (P[x] == -1)return -1;
	else return P[x] = find(P[x]);
}