#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int tmp = 0;
		tmp += ((int)str[0] - 'A') * pow(26, 2);
		tmp += ((int)str[1] - 'A') * pow(26, 1);
		tmp += ((int)str[2] - 'A') * pow(26, 0);
		int tmpnum = 0;
		tmpnum += ((int)str[4] - '0') * pow(10, 3);
		tmpnum += ((int)str[5] - '0') * pow(10, 2);
		tmpnum += ((int)str[6] - '0') * pow(10, 1);
		tmpnum += ((int)str[7] - '0') * pow(10, 0);
		if (abs(tmpnum - tmp) <= 100)cout << "nice\n";
		else cout << "not nice\n";
	}
}