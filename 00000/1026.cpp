#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> A;
vector<long long> B;
bool compare(long long a, long long b) {
	return a > b;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long N, in;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> in;
		A.push_back(in);
	}
	for (int i = 0; i < N; i++) {
		cin >> in;
		B.push_back(in);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), compare);
	long long answer=0;
	for (int i = 0; i < N; i++)answer += A[i] * B[i];
	cout << answer;
}