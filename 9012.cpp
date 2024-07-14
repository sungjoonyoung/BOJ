#include <iostream>
#include <string>
using namespace std;
char arr[51];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, idx;
	string str;
	cin >> N;
	idx = 0;
	while (N--) {
		int key = 1;
		idx = 0;
		cin >> str;
		for (auto c : str) {
			if (c == '(') {
				arr[idx] = '(';
				idx++;
			}
			else if (c == ')') {
				if (idx == 0) {
					cout << "NO" << "\n";
					key = 0;
					break;
				}
				else if (arr[idx-1] == '(') idx--;
				else {
					cout << "NO" << "\n";
					key = 0;
					break;
				}
			}
		}
		if (key == 1) {
			if (idx == 0)cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		
	}
}