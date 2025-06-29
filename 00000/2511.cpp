#include<iostream>
using namespace std;
int arr[2][10];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A = 0;
	int B = 0;
	int key = 3;
	for (int j = 0; j < 2; j++)for (int i = 0; i < 10; i++)cin >> arr[j][i];
	for (int i = 0; i < 10; i++) {
		if (arr[0][i] < arr[1][i]) {
			key = 2;
			B += 3;
		}
		else if (arr[0][i] > arr[1][i]) {
			key = 1;
			A += 3;
		}
		else {
			B += 1; A += 1;
		}
	}
	if (A > B)cout << A << " " << B << "\nA";
	else if (A < B)cout << A << " " << B << "\nB";
	else {
		if(key==1)cout << A << " " << B << "\nA";
		else if (key == 2)cout << A << " " << B << "\nB";
		else if (key == 3)cout << A << " " << B << "\nD";
	}
}