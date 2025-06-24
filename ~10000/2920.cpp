#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int answer = 4;
	int before = 0;
	for (int i = 0; i < 8; i++) {
		int in;
		cin >> in;
		if (i == 0) {
			if (in == 1)answer = 1;
			else if (in == 8)answer = 2;
		}
		else if (answer) {
			if (answer == 1 and in > before)answer = 1;
			else if (answer == 2 and in < before)answer = 2;
			else answer = 0;
		}
		before = in;
	}
	if (answer == 1)cout << "ascending";
	else if (answer == 2)cout << "descending";
	else cout << "mixed";
}