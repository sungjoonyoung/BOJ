#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	long long maxnum = 0;
	long long minnum = 1'000'001;
	while (N--) {
		long long in;
		cin >> in;
		maxnum = max(maxnum, in);
		minnum = min(minnum, in);
	}
	cout << maxnum * minnum;
}