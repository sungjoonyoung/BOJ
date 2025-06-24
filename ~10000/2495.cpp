#include<string>
#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b, c;
	cin >> a >> b >> c;
	char before = 'a';
	int count = 0;
	int maxcount = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == before)count++;
		else {
			before = a[i];
			count = 1;
		}
		if (count > maxcount)maxcount = count;
	}
	cout << maxcount << "\n";

	before = 'a';
	count = 0;
	maxcount = 0;
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == before)count++;
		else {
			before = b[i];
			count = 1;
		}
		if (count > maxcount)maxcount = count;
	}
	cout << maxcount << "\n";

	before = 'a';
	count = 0;
	maxcount = 0;
	for (int i = 0; i < c.size(); i++) {
		if (c[i] == before)count++;
		else {
			before = c[i];
			count = 1;
		}
		if (count > maxcount)maxcount = count;
	}
	cout << maxcount << "\n";
}