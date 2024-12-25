#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int maxnum = -1;
	int maxind;
	for (int i = 1; i <= 9; i++) {
		int in;
		cin >> in;
		if (in > maxnum) {
			maxnum = in;
			maxind = i;
		}
	}
	cout << maxnum << "\n" << maxind;
}