#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
void NM(int before, int M, int N, int x);
void out(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> M >> N;
	for (int i = 1; i <= M; i++) {
		v.push_back(i);
		//cout << i << " ";
		NM(i, M, N, 1);
		v.pop_back();
	}
}
void NM(int before, int M, int N, int x) {
	if (x == N) {
		if (before > M)return;
		out();
		cout << "\n";
		return;
	}
	for (int i = before; i <= M; i++) {
		v.push_back(i);
		//cout << i << " ";
		NM(i, M, N, x + 1);
		v.pop_back();
	}
}
void out(void) {
	for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
}