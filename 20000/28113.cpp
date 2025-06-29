#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, A, B;
	cin >> N >> A >> B;
	if (B >= N) {
		if (A < B)cout << "Bus";
		else if (A > B)cout << "Subway";
		else cout << "Anything";
	}
	else cout << "Bus";
}