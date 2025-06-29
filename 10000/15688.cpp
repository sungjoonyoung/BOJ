#include<iostream>
using namespace std;
int arr[2000001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, in;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> in;
		arr[in + 1000000]++;
	}
	for (int i = 0; i < 2000001; i++) {
		if (!arr[i])continue;
		for (int j = 0; j < arr[i]; j++)cout << i - 1000000 << "\n";
	}
}