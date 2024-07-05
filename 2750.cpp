#include <iostream>
using namespace std;

int arr[2000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	

	cin >> T;
	for (int i = 0; i < T; i++) {
		int tmp;
		cin >> tmp;
		tmp = tmp + 1000000;
		arr[tmp] = 1;

	}
	int count = 0;
	for (int i = 0; i < 2000000; i++) {
		if (arr[i] == 1)cout << i-1000000 << "\n";
	}
}