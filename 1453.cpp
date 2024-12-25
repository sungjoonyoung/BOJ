#include<iostream>
using namespace std;
bool arr[101];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		if (arr[in])answer++;
		arr[in] = 1;
	}
	cout << answer;
}