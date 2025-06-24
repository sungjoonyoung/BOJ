#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M;
	cin >> M;
	int num = 0;
	int key = 1;
	int realcount = 0;
	while (key) {
		num++;
		int num1 = num;
		int count = 0;
		while (1) {
			if (num1 == 0)break;
			else if (num1 % 10 == 6) count++;
			else count = 0;

			if (count == 3) {
				realcount++;
				break;
			}
			num1 /= 10;
		}
		if (realcount == M) {
			cout << num;
			break;
		}
	}
}