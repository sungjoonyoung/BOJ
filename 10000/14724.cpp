#include<iostream>
#include<string>
using namespace std;
string arr[9] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int maxnum = 0;
	int maxind = 0;
	int N;
	cin >> N;
	for (int i = 0; i < 9; i++) {
		int tmp = 0;
		for (int j = 0; j < N; j++) {
			int in;
			cin >> in;
			tmp = max(in, tmp);
		}
		if (tmp > maxnum) {
			maxnum = tmp;
			maxind = i;
		}
	}
	cout << arr[maxind];
}