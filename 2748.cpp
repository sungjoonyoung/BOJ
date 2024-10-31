#include<iostream>
using namespace std;
long long arr[91];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < 91; i++)arr[i] = arr[i - 1] + arr[i - 2];
	int n;
	cin >> n;
	cout << arr[n];
}