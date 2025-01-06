#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string table;
		cin >> table;
		int N;
		cin >> N;
		int answernum = -1;
		string answerstr;
		while (N--) {
			int tmp = 0;
			string tmpstr;
			cin >> tmpstr;
			for (int i = 0; i < table.size(); i++) tmp += (table[i] == tmpstr[i]);
			if (tmp > answernum) {
				answernum = tmp;
				answerstr = tmpstr;
			}
		}
		cout << answerstr << "\n";
	}
}