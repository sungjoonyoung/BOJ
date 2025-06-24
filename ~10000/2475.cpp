#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int answer = 0;
	for (int i = 0; i < 5; i++) {
		int in;
		cin >> in;
		answer += (in*in) % 10;
	}
	cout << answer % 10;
}