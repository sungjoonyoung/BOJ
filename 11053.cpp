#include<iostream>
using namespace std;
int in[1000];
int out[1000];
int find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> in[i];
		out[i] = 1;
	}
	for (int i = 1; i < N; i++)out[i]+=find(i);
	int answer=1;
	for (int i = 0; i < N; i++)answer = max(answer, out[i]);
	//for (int i = 0; i < N; i++)cout<<out[i]<<" ";
	cout << answer;
}
int find(int x) {
	int maxnum = 0;
	for (int i = 0; i < x; i++) {
		if (in[i] >= in[x])continue;
		maxnum = max(maxnum, out[i]);
	}
	return maxnum;
}