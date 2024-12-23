#include<iostream>
#include<string>
#include<cmath>;
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		string str;
		cin >> str;
		if (str == "0")return 0;
		long long tmp = 1000000;
		while (tmp >= 10) {
			tmp = 0;
			for (int i = 0; i < str.size(); i++)tmp += (int)str[i] - '0';
			str = to_string(tmp);
		}
		cout << tmp << "\n";
	}
}