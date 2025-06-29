#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		int n, k;
		cin >> n;
		if (cin.eof())break;
		cin >> k;
		//n/k
		int coupon = n;
		int stamp=0;
		long long out = 0;
		while (1) {
			out += coupon;
			stamp += coupon;
			coupon = 0;
			if (stamp < k)break;
			coupon = stamp / k;
			stamp %= k;
		}
		cout << out<<"\n";
	}
}