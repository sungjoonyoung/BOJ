#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		if (a < b)swap(a, b);
		int tmpa = a;
		int tmpb = b;
		while (1) {
			int tmp = a % b;
			a = b;
			b = tmp;
			if (tmp == 0) break;
		}
		cout << tmpa * tmpb / a<<"\n";
	}
}