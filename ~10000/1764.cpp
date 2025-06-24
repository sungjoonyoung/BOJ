#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
vector<string> v;
vector<string> list;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<string, char> map;
	int N, M;
	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		map.insert({ str,1 });
	}
	int idx;
	while (M--) {
		cin >> str;
		if (map[str] == 1) {
			list.push_back(str);
		}
	}
	sort(list.begin(), list.end());
	cout << list.size() << "\n";
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << "\n";
	}

}