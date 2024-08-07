#include<iostream>
using namespace std;
long long arr[105] = { 0,1, 1, 1, 2, 2, 3, 4, 5, 7, 9 };
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for (int i = 9; i < 105; i++)arr[i] = arr[i - 1] + arr[i - 5];
	int N; cin >> N;
	while (N--) { int tmp; cin >> tmp; cout << arr[tmp]<<"\n"; }
}