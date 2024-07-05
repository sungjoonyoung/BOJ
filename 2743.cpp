#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	getline(cin, a);
	cout << a.size();
}