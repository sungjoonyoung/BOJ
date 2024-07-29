#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	string str;
	cin >> str;
	long long count = 0;
	long long mul = 1;
	for (auto c : str) {
		//cout << int(c)-97<<" ";
		count += (int(c) - 96) * mul;
		mul *= 31;
		mul %= 1234567891;
		//mul %= 123456781;
		//if(mul%123456781!=0)mul %= 123456781;
		//else if (mul % 123456781 == 0)mul = 1;
		count %= 1234567891;
	}
	cout << count;
}