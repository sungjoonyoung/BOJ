#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	long long M = 0;
	long long SUM = 0;
	int tmp = 0;
		
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp > M) M=tmp;
		SUM += tmp;
	}
	
	SUM = SUM * 100;
	SUM = SUM / M;
	SUM = SUM / N;

	cout << SUM;
}