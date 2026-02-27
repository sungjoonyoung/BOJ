#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if ('A' <= str[i] and str[i] <= 'Z')cout << (char)(str[i] - 'A' + 'a');
		else if ('a' <= str[i] and str[i] <= 'z')cout << (char)(str[i] - 'a' + 'A');
	}
}