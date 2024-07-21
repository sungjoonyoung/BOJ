#include<iostream>
using namespace std;
bool arr[100001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M,count, tmp;
	cin >> N;
	cin >> M;
	count = 0;
	while (N--) {
		cin >> tmp;
		if (M > 200000) continue;
		if (tmp > 200000 or tmp >M) continue;
		if (arr[M - tmp] == 1) count++;
		else arr[tmp]=1;
	}
	cout << count;
}