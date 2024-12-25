#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	getline(cin, str);
	string key;
	cin >> key;
	for (int i = 0; i < str.length(); i++) {
		int k = i % key.size();
		if (str[i] == ' ') {
			cout << " ";
			continue;
		}
		int out = str[i] - key[k]-1;
		if (out < 0)out += 'z' - 'a'+1;
		cout << (char)(out+'a');
	}
}