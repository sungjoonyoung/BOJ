#include <iostream>
using namespace std;
int arr[1001];
int arr1[1000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K, N1;
	cin >> N >> K;
	for (int i = 1; i < N + 1; i++) {
		arr[i] = i;
	}
	int idx=1;
	int last = N;
	int soon=0;
	for (int i = 0; i < N; i++) {
		idx = idx + K - 1;
		idx = idx % last;
		if (idx == 0)idx = last;
		arr1[soon] = arr[idx];
		soon++;
		for (int j = 0; idx+1+ j < last+1; j++) {
			arr[idx + j] = arr[idx + 1 + j];
		}
		last--;
	}

	cout << "<";
	for (int i = 0; i < N-1; i++) {
		cout << arr1[i] << ", ";
	}
	cout << arr1[N - 1] << ">";
}