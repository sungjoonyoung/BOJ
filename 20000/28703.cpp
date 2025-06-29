#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> v;
int dob(int x, int max);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long N, in, max=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> in;
		if (in > max)max = in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++)v[i]=dob(v[i], max);
	sort(v.begin(), v.end());
	long long min = v.back()- v.front();
	//cout << min;
	for (int i = 0; i < v.size() - 1; i++) {
		long long tmp = v[i] * 2 - v[i + 1];
		if (tmp < min)min = tmp;
	}
	cout << min;
}
int dob(int x, int max) {
	while (x*2 < max)x *= 2;
	return x;
}