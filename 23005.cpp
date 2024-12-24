#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//bool arto[1024000000];
vector<bool> arto(1024000000, 0);
vector<int> ps;
long long t(long long x) {
	long long s = 0;
	long long e = ps.size() - 1;
	while (s < e - 1) {
		long long flag = (s + e) / 2;
		if (ps[flag] <= x)s = flag;
		else e = flag;
	}
	return s;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long before = 1;
	ps.push_back(0);

	for (long long i = 2; i <= 32000; i++) {
		if (arto[i])continue;

		for (long long j = i * i; j < 1024000000; j += i) arto[j] = 1;
	}
	for (int i = 2; i < 1024000000; i++) {
		if (!arto[i])ps.push_back(i);
	}
	int N;
	//cout << ps.size();
	cin >> N;
	for (int i = 0; i < N; i++) {
		long long in;
		cin >> in;
		long long tmpin = sqrt(in);
		long long ind = t(tmpin);
		if ((long long)ps[ind] * ps[ind + 1] <= in)cout << "Case #" << i + 1 << ": " << (long long)ps[ind] * ps[ind + 1] << "\n";
		else cout << "Case #" << i + 1 << ": " << (long long)ps[ind - 1] * ps[ind] << "\n";
	}

}