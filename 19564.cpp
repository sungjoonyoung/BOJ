#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	char tmp='a'-1;
	int answer = 0;
	for (int i = 0; i < str.size(); i++) {
		if (tmp < str[i])tmp = str[i];
		else {
			tmp = str[i];
			answer++;
		}
	}
	cout << answer+1;
}