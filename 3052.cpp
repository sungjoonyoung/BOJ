#include<iostream>
using namespace std;
int arr[42];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp;
	N = 10;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		tmp = tmp % 42;
		arr[tmp]++;
	}
	int sum = 0;
	for (int i = 0; i < 42; i++) {
		if (arr[i] > 0)sum++;
	}
	cout << sum;
}