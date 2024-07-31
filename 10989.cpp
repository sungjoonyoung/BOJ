#include<iostream>
#include<algorithm>
using namespace std;
long long arr[10001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr[tmp]++;
	}
	for (int i = 1; i < 10001; i++) {

		for (int j = 0; j < arr[i]; j++) {
			if (arr[i] == 0)break;
			cout << i << "\n";
		}
	}
}