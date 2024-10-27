#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.insert(v.begin() + i - in, i+1);
	}
	for (int i = 0; i < N; i++)cout << v[i] << " ";
}