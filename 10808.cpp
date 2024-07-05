#include <iostream>
#include <string>
using namespace std;

int arr[26];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string come;
	cin >> come;

	for (auto c : come) {
		arr[c - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}