#include<iostream>
#include<vector>
using namespace std;
vector<bool> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		v.push_back(0);
		for (int i = 0; i < n; i++) {
			v.push_back(1);
		}
		for (int i = 2; i < n+1; i++) {
			for (int j = i; j < n+1; j += i) {
				if (v[j] == 0)v[j] = 1;
				else if (v[j] == 1)v[j] = 0;
			}
		}
		int sum = 0;
		for (int i = 1; i < n+1; i++) {
			if (v[i] == 1)sum++;
		}
		cout << sum<<"\n";
		v.clear();
	}
}