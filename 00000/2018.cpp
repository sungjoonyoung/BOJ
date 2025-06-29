#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, tmp;
	cin >> N;
	
	int idx1, idx2;
	idx1 = 1;
	idx2 = 1;
	tmp = 1;
	int count = 0;
	while (1) {
		if (idx2 == N)break;
		if (tmp == N) {
			count++;
			idx2++;
			//tmp += arr[idx2];
			tmp += idx2;
		}
		else if (tmp < N) {
			idx2++;
			//tmp += arr[idx2];
			tmp += idx2;
		}
		else if (N < tmp) {
			//tmp -= arr[idx1];
			tmp -= idx1;
			idx1++;
		}
	}
	cout << count+1;
}