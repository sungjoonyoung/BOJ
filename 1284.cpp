#include<iostream>
#include<string>
using namespace std;
int func(char x) {
	if (x == '1')return 2;
	if (x == '0')return 4;
	return 3;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		string str;
		cin >> str;
		if (str == "0")return 0;
		int answer = 0;
		for (auto a : str) {
			answer += func(a);
		}
		cout << answer + str.length()+1<<"\n";
	}
}
