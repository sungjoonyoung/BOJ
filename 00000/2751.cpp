#include <iostream>
#include <string>
using namespace std;

int arr[2000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int roop, tmp;
	cin >> roop;
	for (int i = 0; i < roop; i++) {
		cin >> tmp;
		arr[tmp + 1000000]++;
	}
	
	for (int i = 0; i < 2000001; i++) {
		if (arr[i] == 0) continue;
		else cout << i - 1000000 <<"\n";
	}
}