#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long answer = 1;
	long long N;
	cin >> N;
	for (long long i = 1; i <= N; i++) {
		answer += (i%45678 * 3)%45678+1;
		answer %= 45678;
		
	}
	cout << answer%45678;
}