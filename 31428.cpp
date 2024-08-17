#include<iostream>
using namespace std;
int arr[4];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	char c;
	cin >> N;
	while (N--) {
		cin >> c;
		if (c == 'C')arr[0]++;
		else if (c == 'S')arr[1]++;
		else if (c == 'I')arr[2]++;
		else if (c == 'A')arr[3]++;
	}
	cin >> c;
	if (c == 'C')cout<<arr[0];
	else if (c == 'S')cout<<arr[1];
	else if (c == 'I')cout << arr[2];
	else if (c == 'A')cout << arr[3];

}