#include<iostream>
#include<vector>
using namespace std;
bool che[10000001];
vector<int> prime;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long N; cin >> N;
	long long answer = N;
	long long tmp = N;
	for (long long i = 2; i < 10000001; i++) {
		if (i > N)break;
		if (che[i])continue;
		for (long long j = 1; j * i < 10000001; j++)che[i * j] = 1;
		if (answer % i == 0) {
			answer -= answer / i;
			while (tmp % i == 0)tmp /= i;
		}
	}

	if (tmp == 1)cout << answer;
	else cout << answer - answer / tmp;
}