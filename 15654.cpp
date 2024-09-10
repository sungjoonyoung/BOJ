#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
vector<bool> used;
vector<int> out;
void func(int x, int M, int y);
void outf(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
		used.push_back(0);
	}
	sort(v.begin(), v.end());
	func(0, M, 0);
}
void func(int x, int M, int y) {
	if (x == M) {
		outf();
		cout << "\n";
		return;
	}
	for (int i = 0; i < used.size(); i++) {
		if (used[i] == 1)continue;
		out.push_back(v[i]);
		used[i] = 1;
		func(x + 1, M, y+1);
		out.pop_back();
		used[i] = 0;
	}
}
void outf(void) {
	for (int i = 0; i < out.size(); i++)cout << out[i] << " ";
}