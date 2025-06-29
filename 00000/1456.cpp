#include<iostream>
#include<vector>
using namespace std;
bool arr[10000001];
vector<long long> prime;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long A, B;
	cin >> A >> B;
	int answer = 0;
	for (int i = 2; i < 10000001; i++) {
		if (arr[i])continue;
		prime.push_back(i);
		for (int j = 1; i * j < 10000001; j++) arr[i * j] = 1;
	}
	int count = 0;
	A--;
	for (int i = 0; i < prime.size(); i++) {
		if (prime[i] * prime[i] > B)break;
		long long tmpA = A;
		long long tmpB = B;
		while (tmpB >=prime[i]) {
			tmpB /= prime[i];
			count++;
		}

		while (tmpA >= prime[i]) {
			tmpA /= prime[i];
			count--;
		}
		if (prime[i] > A)count--;
		//cout << count<<"\n";
	}
	cout << count;
}