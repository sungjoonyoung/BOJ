#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		char c;
		cin >> c;
		if (c == '#')return 0;
		string str;
		getline(cin, str);
		int count = 0;
		for (auto a : str) {
			if ('A' <= a and a <= 'Z')a -= 'A' - 'a';
			if (c == a)count++;
		}
		cout << c << " " << count << "\n";
	}
}