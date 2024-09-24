#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
vector<int> indout;
vector<int> out;
int find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		out.push_back(in);
		indout.push_back(in);
	}
	int before = 10000000000000;
	sort(indout.begin(), indout.end());
	for (int i = 0; i < indout.size(); i++) {
		if (indout[i] != before)v.push_back(indout[i]);
		before = indout[i];
	}
	//sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)cout << find(out[i]) << " ";
}
int find(int x) {
	int idx1 = 0;
	int idx2 = v.size() - 1;
	if (v[idx1] == x)return idx1;
	if (v[idx2] == x)return idx2;
	while (idx1 + 1 != idx2) {
		int mid = (idx1 + idx2) / 2;
		if (v[mid] == x)return mid;
		if (v[mid] < x)idx1 = mid;
		else if (v[mid] > x)idx2 = mid;
	}
	if (v[idx1] == x)return idx1;
	if (v[idx2] == x)return idx2;
}