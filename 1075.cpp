#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	N -= N % 100;
	int answer;
	for (int i = 0; i < 100; i++) {
		if ((N + i) % M == 0) {
			answer = i;
			break;
		}
	}
	if (0 <= answer and answer < 10)cout << "0" << answer;
	else cout << answer;
}