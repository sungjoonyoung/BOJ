#include<iostream>
#include<vector>
#include<string>
#include<deque>
using namespace std;
vector<vector<char>> v;
deque<int> idx;

bool D(int re);

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T, len;
	string op, arr;
	cin >> T;

	for (int n = 0; n < T; n++) {
		v.clear();
		idx.clear();
		cin >> op;
		cin >> len;
		cin >> arr;
		int ind = 0;
		int key = 1;
		int re = 0;
		v.push_back(vector<char>());
		for (char a : arr) {
			if (a == '[' or a == ',' or a == ']') {
				if (a == ',') {
					idx.push_back(ind);
					ind++;
					v.push_back(vector<char>());
				}
				continue;
			}
			v[ind].push_back(a);
		}
		if (v[0].size() != 0)idx.push_back(ind);

		for (char a : op) {
			if (a == 'R') {
				if (re == 0)re = 1;
				else if (re == 1)re = 0;
			}
			if (a == 'D') {
				if (D(re)) { key = 0; break; }
			}
		}
		
		if (key == 0) {
			cout << "error\n";
		}

		else {

			cout << "[";
			if (re == 0) {
				for (int i = 0; i <idx.size(); i++) {
					for (int j = 0; j < v[idx.front() + i].size(); j++) {
						cout << char(v[idx.front() + i][j]);
					}
					if (i == idx.size() - 1)continue;
					cout << ",";
				}
			}
			else {
				for (int i = idx.size() - 1; i > -1; i--) {
					for (int j = 0; j < v[idx.front() + i].size(); j++) {
						cout << char(v[idx.front() + i][j]);
					}
					if (i == 0)continue;
					cout << ",";
					
				}
			}
			cout << "]\n";
		}
		
	}
	
}


bool D(int re) {
	if (idx.empty()) {
		return 1;
	}
	else {
		if (re == 0) {
			idx.pop_front();
		}
		if (re == 1) {
			idx.pop_back();
		}
		return 0;
	}
}