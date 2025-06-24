#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, two=0, five=0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int tmp = i;
		while (1) {
			if (tmp % 2 == 0) {
				tmp /= 2;
				two++;
			}
			if (tmp % 5 == 0) {
				tmp /= 5;
				five++;
			}
			else break;
		}
	}
	if (two < five)cout << two;
	if (five < two)cout << five;
	else cout << two;

}