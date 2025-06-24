#include<iostream>
using namespace std;
int arr[10000001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, N;
	cin >> A >> B >> N;
	A %= B;
	for (int i = 0; i < N; i++) {
		A *= 10;
		arr[i] = A / B;
		A %= B;
	}
	cout << arr[N - 1];
}