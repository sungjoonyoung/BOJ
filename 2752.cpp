#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C;
	cin >> A >> B >> C;
	v.push_back(A);
	v.push_back(B);
	v.push_back(C);
	sort(v.begin(), v.end());
	cout << v[0] << " " << v[1] << " " << v[2];
}