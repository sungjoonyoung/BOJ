#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int answer = 0;
	while (1) {
		string str;
		cin >> str;
		if (cin.eof())break;
		answer++;
	}
	cout << answer;
}