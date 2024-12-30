#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int N, M, K, LN;
vector<long long> arr;
void sumf(int a, int c) {
	long long answer = 1;
	int stind = pow(2, LN) + a - 1;
	int enind = pow(2, LN) + c - 1;
	while (stind <= enind) {
		if (stind % 2 == 1)answer *= arr[stind];
		answer %= 1000000007;
		if (enind % 2 == 0)answer *= arr[enind];
		answer %= 1000000007;
		stind = (stind + 1) / 2;
		enind = (enind - 1) / 2;
	}
	cout << answer << "\n";
}
void swpf(int a, long long c) {
	arr[(int)pow(2, LN) + a - 1] = c;
	for (int i = (pow(2, LN) + a - 1)/2; i >= 1; i /= 2) {
		arr[i] = arr[i * 2] * arr[i * 2 + 1];
		arr[i] %= 1000000007;
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N >> M >> K;
	if (N > 2)LN = log2(N - 1) + 1;
	else LN = 0;
	arr.resize((long long)pow(2, LN + 1)+1,1);
	for (int i = pow(2, LN); i < pow(2, LN) + N; i++)cin >> arr[i];
	for (int i = LN - 1; i >= 0; i--) {
		for (int j = pow(2, i); j < pow(2, i + 1); j++) {
			arr[j] = arr[j * 2] * arr[j * 2 + 1];
			arr[j] %= 1000000007;
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