#include<iostream>
using namespace std;
int arr[51];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, L;
	cin >> N >> M >> L;
	int count = 0;
	int have = 1;
	while (1) {
		if (arr[have] == M) {
			cout << count-1;
			return 0;
		}
		if (arr[have] % 2 == 0) {
			count++;
			int tmp = have - L;
			if (tmp <= 0)tmp += N;
			arr[tmp]++;
			have = tmp;
		}
		else {
			count++;
			int tmp = have + L;
			if (tmp > N)tmp -= N;
			arr[tmp]++;
			have = tmp;
		}
	}
}