#include<iostream>
using namespace std;
int arr[5];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	int answer = 0;
	while (N--) {
		int S, Y;
		cin >> S >> Y;
		if ( Y <= 2) {
			if (arr[0] == 0)answer++;
			arr[0]++;
			if (arr[0] == K)arr[0] = 0;
		}
		else if (Y<=4 and S == 1) {
			if (arr[1] == 0)answer++;
			arr[1]++;
			if (arr[1] == K)arr[1] = 0;
		}
		else if (Y <= 4 and S == 0) {
			if (arr[2] == 0)answer++;
			arr[2]++;
			if (arr[2] == K)arr[2] = 0;
		}
		else if (S == 1) {
			if (arr[3] == 0)answer++;
			arr[3]++;
			if (arr[3] == K)arr[3] = 0;
		}
		else if (S ==0) {
			if (arr[4] == 0)answer++;
			arr[4]++;
			if (arr[4] == K)arr[4] = 0;
		}
	}
	cout << answer;
}