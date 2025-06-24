#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	long long sum = 0;
	cin >> N;
	while (N--) {
		cin >> tmp;
		if (tmp == 0) {
			sum -= v.back();
			v.pop_back();
		}
		else {
			sum += tmp;
			v.push_back(tmp);
		}
	}
	cout << sum;
}