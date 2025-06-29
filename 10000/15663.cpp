#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
vector<int> vout;
vector<bool> used;
void NM(int x, int M, int before);
void out(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
		used.push_back(0);
	}
	sort(v.begin(), v.end());
	NM(0, M, -1);
}

void NM(int x, int M, int before) {
	int tmp=0;
	if (x == M) {out(); return;}
	//if (before == v.size()-1)return;
	for (int i = 0; i < v.size(); i++) {
		if (used[i] == 1)continue;
		if (v[i] == tmp)continue;
		vout.push_back(v[i]);
		used[i] = 1;
		tmp = v[i];
		NM(x + 1, M, i);
		vout.pop_back();
		used[i] = 0;
	}
}
void out(void) {
	for (int i = 0; i < vout.size(); i++)cout << vout[i] << " ";
	cout << "\n";
}