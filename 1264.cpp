#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	while (1) {
		getline(cin, str);
		int count = 0;
		if (str[0] == '#')break;
		for (auto a : str) {
			if (a == 'A' or a == 'E' or a == 'I' or a == 'O' or a == 'U')count++;
			if (a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u')count++;
		}
		cout << count<<"\n";
	}
}