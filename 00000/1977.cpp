#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int minnum = -1;
	long long maxnum = 0;
	for (float i = N; i <=M; i++) {
		if (pow(sqrt(i), 2) == i) {
			if (minnum == -1)minnum = i;
			maxnum += i;
		}
	}
	if (minnum == -1)cout << -1;
	else cout << maxnum << "\n" << minnum;
}