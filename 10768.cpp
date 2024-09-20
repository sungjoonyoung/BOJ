#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int M, D;
	cin >> M >> D;
	if (M < 2)cout << "Before";
	else if (M > 2)cout << "After";
	else {
		if (D < 18)cout << "Before";
		else if (D > 18)cout << "After";
		else cout << "Special";
	}
}