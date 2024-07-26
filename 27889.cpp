#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	if (str == "NLCS")cout << "North London Collegiate School";
	else if (str == "BHA")cout << "Branksome Hall Asia";
	else if (str == "KIS")cout << "Korea International School";
	else if (str == "SJA")cout << "St. Johnsbury Academy";
}
