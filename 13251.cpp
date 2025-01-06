#include<iostream>
using namespace std;
int arr[50];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int M;
	cin >> M;
	long long total = 0;
	for (int i = 0; i < M; i++) {
		int in;
		cin >> in;
		arr[i] = in;
		total += in;
	}
	long double answer = 0;
	int K;
	cin >> K;
	for (int i = 0; i < M; i++) {
		if (arr[i] < K)continue;
		long double tmp = 1;
		for (int j = 0; j < K; j++) {
			tmp *= arr[i] - j;
			tmp /= total - j;
		}
		answer += tmp;
	}
	
	cout.precision(20);
	cout << answer;
}