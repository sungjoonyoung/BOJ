#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long what(string str) {
	if (str == "black")return 0;
	if (str == "brown")return 1;
	if (str == "red")return 2;
	if (str == "orange")return 3;
	if (str == "yellow")return 4;
	if (str == "green")return 5;
	if (str == "blue")return 6;
	if (str == "violet")return 7;
	if (str == "grey")return 8;
	if (str == "white")return 9;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b, c;
	cin >> a >> b >> c;

	cout << (what(a) * 10 + what(b))*(long long)pow(10, what(c));
}