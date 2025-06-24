#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count = 0;
	for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++) {
		char ch;
		cin >> ch;
		if (i % 2 == 0 and j % 2 == 0 and ch == 'F')count++;
		if (i % 2 != 0 and j % 2 != 0 and ch == 'F')count++;
	}
	cout << count;
}