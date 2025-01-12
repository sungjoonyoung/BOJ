#include<iostream>
using namespace std;
int arr[500000];
int tmp[500000];
long long answer = 0;
void func(int s, int e) {
	if (s == e)return;
	int m = (s + e) / 2;
	func(s, m);
	func(m + 1, e);
	for (int i = s; i <= e; i++)arr[i] = tmp[i];
	int ind = s;
	int ind1 = s;
	int ind2 = m + 1;
	while (ind1 <= m and ind2 <= e) {
		if (arr[ind1] <= arr[ind2]) {
			tmp[ind] = arr[ind1];
			ind1++;
			ind++;
		}
		else {
			tmp[ind] = arr[ind2];
			ind2++;
			ind++;
			answer += m - ind1 + 1;
		}
	}
	while (ind1 <= m) {
		tmp[ind] = arr[ind1];
		ind1++;
		ind++;
	}
	while (ind2 <= e) {
		tmp[ind] = arr[ind2];
		ind2++;
		ind++;
	}
	//for (int i = s; i <= e; i++)arr[i] = tmp[i];
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> tmp[i];
	func(0, N - 1);
	//for (int i = 0; i < N; i++)cout << arr[i] << " ";
	//cout << "\n";
	cout << answer;
}