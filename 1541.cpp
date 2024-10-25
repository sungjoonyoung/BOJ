#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int answer = 0;
	int tmp=0;
	bool minusexist = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' and minusexist) {
			answer -= tmp;
			tmp = 0;
		}
		else if (str[i] == '+' and !minusexist) {
			answer += tmp;
			tmp = 0;
		}
		else if (str[i] == '-' and minusexist) {
			answer-=tmp;
			tmp = 0;
		}
		else if (str[i] == '-' and !minusexist) {
			minusexist = 1;
			answer += tmp;
			tmp = 0;
		}
		else {
			tmp *= 10;
			tmp += str[i] - '0';
		}
	}
	if (minusexist)answer -= tmp;
	else answer += tmp;
	cout << answer;
}