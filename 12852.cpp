#include<iostream>
using namespace std;
int arr[10000000];
int record[10000000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	arr[1] = 0;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		record[i] = i - 1;
		if (i % 3 == 0)if (arr[i] > 1 + arr[i / 3]) {
			arr[i] = 1 + arr[i / 3];
			record[i] = i / 3;
		}
		if (i % 2 == 0)if (arr[i] > 1 + arr[i / 2]) {
			arr[i] = 1 + arr[i / 2];
			record[i] = i / 2;
		}
	}
	cout << arr[n]<<"\n";
	int idx=n;

	while (1) {
		if (idx == 1) {
			cout << "1\n";
			break;
		}
		cout << idx <<" ";
		idx = record[idx];

	}
}