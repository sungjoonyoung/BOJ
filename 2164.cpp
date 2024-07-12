#include <iostream>
#include <string>
using namespace std;
int arr[1000000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, idx, tmp;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		arr[i] = i;
	}
	idx = 1;
	tmp = N;
	while (N - 1) {
		idx++;
		N--;
		arr[tmp + 1] = arr[idx];
		tmp++;
		idx++;
	}
	cout << arr[idx];
}