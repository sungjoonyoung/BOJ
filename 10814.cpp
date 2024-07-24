#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<string>> v(201);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, age;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> age >> str;
		v[age].push_back(str);
	}
	for (int i = 0; i < 201; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i].size() == 0)break;
			else cout << i << " " << v[i][j] << "\n";
		}
	}
}