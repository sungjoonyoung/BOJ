#include<iostream>
#include<string>
using namespace std;
string arr[3] = { "Soongsil","Korea","Hanyang" };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c >= 100)cout << "OK";
	else {
		if (a < b && a < c)cout << arr[0];
		else if (b < a && b < c)cout << arr[1];
		else cout << arr[2];
	}
}