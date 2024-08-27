#include<iostream>
using namespace std;

void dp(int from, int to, int n);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	dp(1, 3, n);
}
void dp(int from, int to, int n) {
	if (n == 1) {
		cout << from << " " << to << "\n";
		return;
	}
	else {
		dp(from, 6 - to - from, n - 1);
		cout << from << " " << to << "\n";
		dp(6-to-from,to, n - 1);
	}
}
//from BaaaaaaaarkingDog. 문제 풀이 학습용 테스트 제출입니다. 감사합니다.