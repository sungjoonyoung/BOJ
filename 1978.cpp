#include <iostream>
using namespace std;
int arr[1001];
int prime[1001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	arr[2] = 2;
	prime[1] = 1;
	prime[2] = 0;
	for (int i = 0; i < 1001; i++) {
		arr[i] = i;
		for (int j = 2; j < i; j++) {
			if (arr[i] % arr[j] == 0) {
				prime[i] = 1;
				break;
			}
		}
	}
	int N, tmp;
	int count = 0;
	cin >> N;
	while (N--) {
		cin >> tmp;
		if (prime[tmp] == 0)count++;
	}
	cout << count;
}