#include<iostream>
using namespace std;
int arr[100];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int MAX=0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (arr[i] + arr[j] + arr[k] < M+1) {
					if (arr[i] + arr[j] + arr[k] > MAX)MAX = arr[i] + arr[j] + arr[k];
				}
				else continue;
			}
		}
	}
	cout << MAX;
}
