#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int N;
	cin >> N;
	cout << str[N-1];
}