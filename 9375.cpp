#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
map<string,int> m;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		m.clear();
		int N;
		cin >> N;
		for(int i=0;i<N;i++){
			string what, where;
			cin >> what >> where;
			if (m.find(where) == m.end()) {
				m.insert({ where,1 });
			}
			else m[where]++;
		}
		int answer = 1;
		for (pair<string,int> i : m) {
			answer *= i.second + 1;
		}
		cout << answer - 1 << "\n";
	}
}