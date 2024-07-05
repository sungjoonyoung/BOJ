#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int len;
	int dead;
	cin >> len >> dead;

	for (int i = 0; i < len; i++) {
		int tmp=0;
		cin >> tmp;
		if (tmp < dead) cout << tmp << " ";
	}

}