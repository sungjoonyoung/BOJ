#include<iostream>
#include<string>
#include<vector>
using namespace std;
int mapsec[1001][1001];
vector<char> out;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string x, y;
	cin >> x >> y;
	if (x.size() < y.size())swap(x, y);
	for (int i = 1; i <= x.size(); i++)for (int j = 1; j <= y.size(); j++) {
		if (x[i - 1] == y[j - 1]) mapsec[i][j] = mapsec[i - 1][j - 1] + 1;
		else mapsec[i][j] = max(mapsec[i - 1][j], mapsec[i][j - 1]);
	}
	int maxnum = mapsec[x.size()][y.size()];
	int idx = y.size();
	cout << maxnum << "\n";
	for (int i = x.size(); i > 0; i--)for (int j = idx; j > 0; j--) {
		if (mapsec[i][j] == maxnum and x[i - 1] == y[j - 1]) {
			//cout << x[i - 1];
			out.push_back(x[i - 1]);
			maxnum--;
			idx = --j;
			break;
		}
		if (maxnum == 0)break;
	}
	//cout << out.size()<<"\n";
	if(!out.empty())for (int i = out.size() - 1; i >= 0; i--)cout << out[i];
}