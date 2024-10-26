#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		long long in;
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	long long answer = 3000000001;
	int a=0, b=0, c=0;
	for (int i = 1; i < v.size() - 1; i++) {
		int ind1 = 0;
		int ind2 = v.size() - 1;
		long long goal = 0 - v[i];
		while (ind1 != i and ind2 != i) {
			//cout << abs(goal - (v[ind1] + v[ind2])) << "\n";
			if (abs(goal - (v[ind1] + v[ind2])) < answer) {
				answer = abs(goal - (v[ind1] + v[ind2]));
				a = ind1;
				b = i;
				c = ind2;
			}
			if (v[ind1] + v[ind2] > goal)ind2--;
			else ind1++;
		}
	}
	cout << v[a] << " " << v[b] << " " << v[c];
}