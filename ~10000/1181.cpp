#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string arr[52][20000];
int leng[52];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N,tmp;
	cin >> N;
	string str;
	for (int i = 0; i < 52; i++) {
		for (int j = 0; j < 20000; j++) {
			arr[i][j] = "0";
		}
	}
	for (int i = 0; i < N; i++) {
		cin >> str;
		tmp = str.length();
		arr[tmp][i] = str;
		leng[tmp]++;
		for (int j = 0; j < i; j++) {
			if (arr[tmp][i] == arr[tmp][j]) {
				arr[tmp][i] = "0";
			}
		}
	}
	for (int i = 0; i < 52; i++) {
		sort(arr[i], arr[i] + 20000);
	}
	
	

	for (int i = 1; i < 52; i++) {
		for (int j = 0; j < 20000; j++) {
			if (arr[i][j]=="0")continue;
			cout << arr[i][j] << "\n";
		}
	}
}