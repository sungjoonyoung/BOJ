#include<iostream>
#include<string>
using namespace std;
long long func(char c) {
	if ('a' <= c and c <= 'z')return c - 'a' + 1;
	return c - 'A' + 27;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	long long answer = 0;
	for (auto c : str) answer += func(c);
	if (answer == 1)cout << "It is a prime word.";
	else {
		bool key = 0;
		for (int i = 2; i < answer; i++)if (answer % i == 0)key = 1;
		if (key)cout << "It is not a prime word.";
		else cout << "It is a prime word.";
	}
}