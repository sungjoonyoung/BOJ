#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	long long ten = 1;
	bool contain = 0;
	cin >> str;
	int sum=0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '7')contain = 1;
		sum += (str[str.length()-i-1]-48) * ten;
		ten *= 10;
	}
	if (contain == 0 and sum % 7 != 0)cout << "0";
	else if (contain == 0 and sum % 7 == 0)cout << "1";
	else if (contain == 1 and sum % 7 != 0)cout << "2";
	else if (contain == 1 and sum % 7 == 0)cout << "3";
}