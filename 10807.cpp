#include <iostream>
#include <string>
using namespace std;
int arr[2000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int many;
	cin >> many;
	int tmp;
	for (int i = 0; i < many; i++) {
		cin >> tmp;
		tmp = tmp + 100;
		arr[tmp]++;
	}

	int what;
	cin >> what;
	what = what + 100;
	cout << arr[what];
}