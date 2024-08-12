#include<iostream>
#include<vector>
using namespace std;
vector<bool> v;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long A, B, C;
	cin >> A >> B >> C;
	while (B!=1) {
		if (B % 2 == 0) {
			v.push_back(0);
			B /= 2;
		}
		else {
			v.push_back(1);
			B -= 1;
			B /= 2;
		}
	}
	A %= C;
	long long tmp=A;
	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] == 1) {
			tmp *= tmp;
			tmp %= C;
			tmp *= A;
			tmp %= C;
		}
		else {
			tmp *= tmp;
			tmp %= C;
		}
	}
	cout << tmp;
}