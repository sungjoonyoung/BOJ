#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	while (1){
		getline(cin, str);
		if (cin.eof())break;
		cout << str << "\n";
	}
}