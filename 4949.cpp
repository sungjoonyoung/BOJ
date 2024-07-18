#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<char> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	while (1) {
		int key = 1;
		getline(cin, str);
		v.clear();
		if (str == ".") {
			key = 0;
			break;
		}
		for (auto c: str) {
			if (c == '(') {
				v.push_back('(');
			}
			else if (c == '[') {
				v.push_back('[');
			}
			else if (c == ')') {
				if (v.size()>0 and v.back() == '(')v.pop_back();
				else key = 0;
			}
			else if (c == ']') {
				if (v.size()>0 and v.back() == '[')v.pop_back();
				else key = 0;
			}
		}
		if (key == 1 and v.size() == 0)cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}