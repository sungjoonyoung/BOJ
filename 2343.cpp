#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
bool chck(int x);
int M;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, maxnum=0, sum=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
		maxnum = max(maxnum, in);
		sum += in;
	}
	int idx1=maxnum-1, idx2=sum;
	while (idx1 != idx2 - 1) {
		int mid = (idx1 + idx2) / 2;
		if (chck(mid))idx2 = mid;
		else idx1 = mid;
	}
	cout << idx2;
}
bool chck(int x) {
	int tmpM = M, tmpx =x;
	for (int i = 0; i < v.size(); i++) {
		if (tmpM < 0)break;
		if (tmpx - v[i] < 0) {
			i--;
			tmpx = x;
			tmpM--;
			continue;
		}
		tmpx -= v[i];
	}
	return tmpM > 0;
}