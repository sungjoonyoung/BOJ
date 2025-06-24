#include<iostream>
#include<unordered_set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
unordered_set<string> s;
vector<string> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string name, func;
		cin >> name >> func;
		if (func == "enter")s.insert(name);
		else s.erase(name);
	}
	for (auto a : s)v.push_back(a);
	sort(v.begin(), v.end());

	for (int i = v.size() - 1; i >= 0;i--)cout << v[i] << "\n";
}