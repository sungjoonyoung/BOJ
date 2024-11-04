#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	bool key = 0;
	while (N--) {
		string str;
		cin >> str;
		if (str == "anj")key = 1;
	}
	if (key)cout << "构具;";
	else cout << "构具?";
}