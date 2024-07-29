#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long N;
	cin >> N;
	int k = 1;
	int sum;
	while (1) {
		sum = 3 * k * k - (3 * k) + 1;
		if (N == sum or N < sum) {
			cout << k;
			break;
		}
		k++;
	}
}