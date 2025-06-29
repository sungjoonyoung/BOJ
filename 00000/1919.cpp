#include<iostream>
#include<string>
using namespace std;
int arr1['z' - 'a' + 1];
int arr2['z' - 'a' + 1];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a;
	cin >> b;
	for (int i = 0; i < a.size(); i++)arr1[a[i] - 'a']++;
	for (int i = 0; i < b.size(); i++) {
		if (arr1[b[i] - 'a'])arr1[b[i] - 'a']--;
		else arr2[b[i] - 'a']++;
	}
	int answer = 0;
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		answer += arr1[i];
		answer += arr2[i];
	}
	cout << answer;
}