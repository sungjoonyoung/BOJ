#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int zero = 0, one = 0;
	char pivot = 2;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != pivot) {
			if (str[i] == '0') {
				pivot = '0';
				zero++;
			}
			else {
				pivot = '1';
				one++;
			}
		}
	}
	cout << min(zero, one);
}