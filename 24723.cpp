#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, ans =1;
	cin >> N;
	while (N--) ans *= 2;
	cout << ans;
}