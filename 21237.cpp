#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	string str;
	cin >> T;
	cin.ignore();
	while (T--) {
		getline(cin, str);
		int CW = 0;
		int CCW = 0;
		char before = 'O';
		for (char c : str) {
			if (c == 'N') {
				if (before == 'W')CW++;
				else if (before == 'E')CCW++;
				before = c;
			}
			else if (c == 'E') {
				if (before == 'N')CW++;
				else if (before == 'S')CCW++;
				before = c;
			}
			else if (c == 'S') {
				if (before == 'E')CW++;
				else if (before == 'W')CCW++;
				before = c;
			}
			else if (c == 'W') {
				if (before == 'S')CW++;
				else if (before == 'N')CCW++;
				before = c;
			}
		}
		if (CW > CCW)cout << "CW\n";
		else cout << "CCW\n";
	}
	
}