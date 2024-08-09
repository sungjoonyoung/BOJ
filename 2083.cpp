#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	while (1) {
		string str;
		int age,kg;
		cin >> str>>age>>kg;
		if (str[0] == '#' and age == 0 and kg == 0)break;
		if (age > 17 or kg >= 80)cout << str << " Senior\n";
		else cout << str << " Junior\n";
	}
}