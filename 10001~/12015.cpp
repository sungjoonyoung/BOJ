#include<iostream>
#include<vector>
using namespace std;
vector<int> length;
int find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	length.push_back(-1);
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		if (length.back() < in)length.push_back(in);
		else {
			length[find(in)] = in;
		}
	}
	cout << length.size() - 1;
}
int find(int x) {
	int ind1 = 0;
	int ind2 = length.size() - 1;
	while (ind1 + 1 != ind2) {
		int mid = (ind1 + ind2) / 2;
		if (length[mid] < x) ind1 = mid;
		else if (length[mid] >= x)ind2 = mid;
	}
	return ind2;
}