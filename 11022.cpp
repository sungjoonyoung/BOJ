#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, N;
	cin >> N;
	for (int i = 1; i < N + 1; i++) {
		cin >> A >> B;
		cout << "Case #"<<i<<": " << A << " + " << B << " = " << A + B<<"\n";
	}
}