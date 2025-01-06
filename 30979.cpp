#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int T;
	cin >> T;
	while (T--) {
		int in;
		cin >> in;
		N -= in;
	}
	if (N <= 0)cout << "Padaeng_i Happy";
	else cout << "Padaeng_i Cry";
}