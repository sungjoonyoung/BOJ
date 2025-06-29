#include <iostream>
#include <string>
using namespace std;
int arr[26];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	getline(cin, str);

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	int tmp;
	int count=0;
	for (auto c : str) {
		tmp = c-'a';
		if (arr[tmp] == -1) {
			arr[tmp] = count;
			
		}
		count++;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}