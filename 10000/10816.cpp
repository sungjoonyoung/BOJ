#include <iostream>
#include <string>
using namespace std;
int arr[20000001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr[tmp + 10000000]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		cout << arr[tmp + 10000000];
	}
}