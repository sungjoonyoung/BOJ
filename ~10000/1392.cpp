#include<iostream>
using namespace std;
int arr[100];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, Q;
	cin >> N >> Q;
	for (int i = 0; i < N; i++)cin >> arr[i];
	for (int i = 0; i < Q; i++) {
		int in;
		cin >> in;
		for (int j = 0; j < N; j++) {
			in -= arr[j];
			if (in < 0) {
				cout << j+1<<"\n";
				break;
			}
		}
	}
}