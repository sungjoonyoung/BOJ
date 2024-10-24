#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> mv;
vector<int> pv;
vector<int> one;
bool func(int x, int y) {
	return x > y;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		if (in > 1)pv.push_back(in);
		else if (in == 1)one.push_back(in);
		else mv.push_back(in);
	}
	sort(pv.begin(), pv.end());
	sort(mv.begin(), mv.end(), func);
	int answer = 0;
	while (mv.size() >= 2) {
		int a = mv.back();
		mv.pop_back();
		int b = mv.back();
		mv.pop_back();
		answer += a * b;
	}
	if (!mv.empty())answer += mv[0];
	while (pv.size() >= 2) {
		int a = pv.back();
		pv.pop_back();
		int b = pv.back();
		pv.pop_back();
		answer += a * b;
	}
	if (!pv.empty())answer += pv[0];
	if (!one.empty())answer += one.size();
	cout << answer;
}