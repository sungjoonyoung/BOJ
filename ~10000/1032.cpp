#include<iostream>
#include<string>
using namespace std;
char arr[50];
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N; cin >> N;
	string str;
	cin >> str;
	N--;
	while (N--) {
		string instr;
		cin >> instr;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != instr[i])str[i] = '?';
		}
	}
	cout << str;
}