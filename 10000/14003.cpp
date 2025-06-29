#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int, int>> length[1000001];
vector<int> out;
int sizenum = 0;
int find(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	length[0].push_back({ -1000000001,0 });
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		if (in > length[sizenum].back().first) {
			sizenum++;
			length[sizenum].push_back({ in,length[sizenum - 1].size() - 1 });
		}
		else {
			int tmp = find(in);
			length[tmp].push_back({ in,length[tmp - 1].size() - 1 });
		}
	}
	int tmpind = length[sizenum].back().second;
	int tmpval = length[sizenum].back().first;
	cout << sizenum << "\n";
	int tmpsizenum = sizenum;
	for (int i = 0; i < sizenum; i++) {
		out.push_back(tmpval);
		tmpsizenum--;
		tmpval = length[tmpsizenum][tmpind].first;
		tmpind = length[tmpsizenum][tmpind].second;
	}
	for (int i = out.size() - 1; i >= 0; i--)cout << out[i] << " ";
}
int find(int x) {
	int ind1 = 0;
	int ind2 = sizenum;
	while (ind1 + 1 != ind2) {
		int tmp = (ind1 + ind2) / 2;
		if (length[tmp].back().first < x)ind1 = tmp;
		else ind2 = tmp;
	}
	return ind2;
}