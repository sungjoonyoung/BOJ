#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		int op = 0;
		if (N < 10)op = 1;
		else if (N < 100)op = 2;
		else if (N < 1000)op = 3;
		else if (N < 10000)op = 4;
		if (N == ((N * N) % (int)pow(10, op)))cout << "YES\n";
		else cout << "NO\n";
	}
}