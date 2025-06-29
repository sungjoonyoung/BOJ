#include<iostream>
using namespace std;
int arr[6];
int main(void) {
	int N,T,P;
	cin >> N;
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	cin >> T >> P;
	int count = 0;
	for (int i = 0; i < 6; i++) {
		if (arr[i] % T != 0)count += arr[i] / T + 1;
		else count += arr[i] / T;
	}
	cout << count << "\n";

	cout << N / P << " " << N % P;
}