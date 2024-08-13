#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<char> v;

bool compare(int x, int y);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	for (auto a : str) {
		v.push_back(a);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < str.size(); i++)cout << v[i];
}
bool compare(int x, int y) {
	return x > y;
}