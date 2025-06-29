#include<iostream>
#include<cmath>
using namespace std;
int N, M, K, LN;
long long arr[3000000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	if (N > 2)LN = log2(N - 1) + 1;
	else LN = 0;
	for (int i = pow(2, LN); i < pow(2, LN+1); i++)arr[i] = 1000000001;
	for (int i = pow(2, LN); i < pow(2, LN) + N; i++)cin >> arr[i];
	for (int i = LN - 1; i >= 0; i--) {
		for (int j = pow(2, i); j < pow(2, i + 1); j++) {
			arr[j] = min(arr[j * 2], arr[j * 2 + 1]);
		}
	}
	while (M--) {
		int a, c;
		cin >> a >> c;
		long long answer = 1000000001;
		int stind = pow(2, LN) + a - 1;
		int enind = pow(2, LN) + c - 1;
		while (stind <= enind) {
			if (stind % 2 == 1)answer = min(arr[stind], answer);
			if (enind % 2 == 0)answer = min(arr[enind], answer);
			stind = (stind + 1) / 2;
			enind = (enind - 1) / 2;
		}
		cout << answer << "\n";
	}

}