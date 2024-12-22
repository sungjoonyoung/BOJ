#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long ind = 1;
	long long in;
	long long count = 0;
	cin >> in;
	while (in) {
		if (ind > in)ind = 1;
		count++;
		in -= ind;
		ind++;
	}
	cout << count;
}