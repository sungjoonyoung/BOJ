#include<iostream>
#include<vector>
using namespace std;
bool inarr[10001];
vector<int> invec;
vector<int> outvec;
void func(int x, int M, int before);
void outfunc(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		inarr[in] = 1;
	}
	for (int i = 1; i <= 10000; i++) if (inarr[i])invec.push_back(i);
	
	func(0, M, 0);
}
void func(int x, int M, int before) {
	if (x == M) { outfunc(); return; }
	for (int i = before; i < invec.size(); i++) {
		outvec.push_back(invec[i]);
		func(x + 1, M, i);
		outvec.pop_back();
	}
}
void outfunc(void) {
	for (int i = 0; i < outvec.size(); i++)cout << outvec[i] << " ";
	cout << "\n";
}