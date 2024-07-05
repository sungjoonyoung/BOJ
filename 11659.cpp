#include <iostream>
#include <string>
using namespace std;

int sum[100000];
int arr[100000];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	int sumint = 0;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		sumint += tmp;
		sum[i] = sumint;
	}

	tmp = 0;

	for (int i = 0; i < M; i++) {
		int n,m;
		cin >> n >> m;
		
		if (n == 1) {
			tmp = sum[m - 1];
			cout << tmp << "\n";
			continue;
			

		}

		tmp = sum[m-1];
		tmp -= sum[n - 2];
		cout << tmp << "\n";

		
	}

	
}