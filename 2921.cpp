#include<iostream>
using namespace std;
int arr[1001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	cout << N * (N + 1) * (N + 2) / 2;
}