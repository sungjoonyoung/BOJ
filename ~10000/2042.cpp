#include<iostream>
#include<cmath>
using namespace std;
int N, M, K, LN;
long long arr[3000000];
void sumf(int a, int c) {
	long long answer = 0;
	int stind = pow(2, LN) + a - 1;
	int enind = pow(2, LN) + c - 1;
	while (stind <= enind) {
		if (stind % 2 == 1)answer += arr[stind];
		if (enind % 2 == 0)answer += arr[enind];
		stind = (stind + 1) / 2;
		enind = (enind - 1) / 2;
	}
	cout << answer << "\n";
}
void swpf(int a, long long c) {
	long long before = arr[(int)pow(2, LN) + a - 1];
	for (int i = (int)pow(2, LN) + a - 1; i >= 1; i /= 2) {
		arr[i] -= before;
		arr[i] += c;
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M >> K;
	if (N > 2)LN = log2(N - 1) + 1;
	else LN = 0;
	for (int i = pow(2, LN); i < pow(2, LN) + N; i++)cin >> arr[i];
	for (int i = LN - 1; i >= 0; i--) {
		for (int j = pow(2, i); j < pow(2, i + 1); j++) {
			arr[j] = arr[j * 2] + arr[j * 2 + 1];
		}
	}
	M += K;
	while (M--) {
		long long op, a, b;
		cin >> op >> a >> b;
		if (op == 1)swpf(a, b);
		else sumf(a, b);
	}
	
}