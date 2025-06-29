#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int key, tmp;
	key = 1;
	int ok = 1;
	string str;
	while (key) {
		ok = 1;
		cin >> str;
		if (str == "0")break;
		tmp = str.length();
		for (int i = 0; i < tmp; i++) {
			if (str[i] != str[tmp -1 - i]) {
				cout << "no" << "\n";
				ok = 0;
				break;
			}
		}
		if (ok == 1)cout << "yes" << "\n";
	}
}