#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(char x, char y) {
	return x > y;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		int count = 0;
		while (str != "6174") {
			count++;
			string minnum;
			string maxnum = str;
			while (maxnum.size() != 4)maxnum.push_back('0');
			sort(maxnum.begin(), maxnum.end(),cmp);
			for (int i = 0; i < 4; i++)minnum.push_back(maxnum[maxnum.size() - 1 - i]);
			int tmp = stoi(maxnum) - stoi(minnum);
			str = to_string(tmp);
		}
		cout << count << "\n";
	}
}