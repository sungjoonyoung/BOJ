#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, tmp, front=0, ans =0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp >= front) {
			front = tmp;
			ans++;
		}
		front = tmp;
	}
	cout << ans;
}