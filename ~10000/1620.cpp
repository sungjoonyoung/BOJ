#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
map<string, string> m;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		string str1 , str2;
		cin >> str1;
		int tmp = i;
		str2 = to_string(tmp);
		m.insert({ str1, str2 });
		m.insert({ str2, str1 });
	}
	for (int i = 0; i < M; i++) {
		string tmps;
		cin >> tmps;
		cout << m[tmps]<<"\n";
	}
}