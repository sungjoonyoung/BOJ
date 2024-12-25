#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	long long answer = 0;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if ('0' <= c and c <= '9')answer += ((long long)c - '0') * pow(16, str.length() - i - 1);
		else answer += ((long long)c - 'A'+10) * pow(16, str.length() - i - 1);
	}
	cout << answer;
}