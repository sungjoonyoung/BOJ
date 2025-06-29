#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		string str;
		getline(cin, str);
		if (str == "END")break;
		for (int i = str.size() - 1; i >= 0; i--)cout << str[i];
		cout << "\n";
	}
}