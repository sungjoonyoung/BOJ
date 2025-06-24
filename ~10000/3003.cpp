#include<iostream>
using namespace std;
int arr[6];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
	cout << 1 - arr[0]<<" " << 1 - arr[1] <<" " << 2 - arr[2]<<" " << 2 - arr[3] <<" " << 2 - arr[4] << " " <<8 - arr[5];
}