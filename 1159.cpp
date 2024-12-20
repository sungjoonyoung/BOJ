#include<iostream>
#include<string>
using namespace std;
int arr['z' - 'a' + 1];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		arr[str[0] - 'a']++;
	}
	bool key = 0;
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		if (arr[i] >= 5) {
			cout << (char)(i + 'a');
			key = 1;
		}
	}
	if (!key)cout << "PREDAJA";
}