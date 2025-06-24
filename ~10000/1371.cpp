#include<iostream>
using namespace std;
int arr['z' - 'a' + 1];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		char c;
		cin >> c;
		if (cin.eof())break;
		arr[c - 'a']++;
	}
	int maxnum = -1;
	int answer = 0;
	for (int i = 0; i < 'z' - 'a' + 1; i++)maxnum = max(arr[i], maxnum);
	for (int i = 0; i < 'z' - 'a' + 1; i++)if (arr[i] == maxnum)cout << char(i + 'a');
}