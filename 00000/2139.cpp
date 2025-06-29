#include<iostream>
using namespace std;
int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int yoon(int x) {
	if (x % 400==0)return 1;
	if (x % 4 == 0 and x % 100 != 0)return 1;
	return 0;
}
int main(void) {
	while (1) {
		int D, M, Y;
		cin >> D >> M >> Y;
		if (D == M and M == Y and Y == 0)return 0;
		int answer = 0;
		if (M != 1)for (int i = 1; i < M; i++)answer += arr[i - 1];
		if (yoon(Y) and M > 2)answer++;
		answer += D;
		cout << answer << "\n";
	}
}