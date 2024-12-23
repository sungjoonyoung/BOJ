#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long func(char c) {
	if (c == '-')return 0;
	if (c == '\\')return 1;
	if (c == '(')return 2;
	if (c == '@')return 3;
	if (c == '?')return 4;
	if (c == '>')return 5;
	if (c == '&')return 6;
	if (c == '%')return 7;
	if (c == '/')return -1;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		long long out = 0;
		string str;
		cin >> str;
		if (str == "#")return 0;
		for (int i = 0; i < str.length(); i++) {
			long long tmp = str.length() - i - 1;
			out += (long long)pow((long long)8, tmp) * func(str[i]);
		}
		cout << out << "\n";
	}
}