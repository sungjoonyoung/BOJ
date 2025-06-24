#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long A, B, C;
	cin >> A >> B >> C;
	if (B >= C)cout << -1;
	else {
		//A+B*x<C*x
		cout << A / (C - B)+1;
	}
}