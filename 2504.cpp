#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
	long long sum=0;
	long long tmp=1;
	int key = 1;
	for (auto c : str) {
		if (c == '(') {
			v.push_back(-2);
			tmp = 0;
		}
		else if (c == '[') {
			v.push_back(-3);
			tmp = 0;
		}
		else if (c == ')') {
			int ok = 1;
			if (v.size()==0) {
				key = 0;
				break;
			}
			while (ok) {
				if (v.size() == 0) {
					key = 0;
					break;
				}
				if (v.back() == -2) {
					if (tmp == 0) {
						v.pop_back();
						v.push_back(2);
						tmp = 0;
					}
					else {
						v.pop_back();
						v.push_back(tmp * 2);
						tmp = 0;
					}
					ok = 0;
				}
				else if (v.back() > 0) {
					tmp += v.back();
					v.pop_back();
				}
				else {
					key = 0;
					break;
				}
			}
			if (key == 0)break;
		}
		else if (c == ']') {
			int ok = 1;
			while (ok) {
				if (v.size() == 0) {
					key = 0;
					break;
				}
				if (v.back() == -3) {
					if (tmp == 0) {
						v.pop_back();
						v.push_back(3);
						tmp = 0;
					}
					else {
						v.pop_back();
						v.push_back(tmp * 3);
						tmp = 0;
					}
					ok = 0;
				}
				else if (v.back() > 0) {
					tmp += v.back();
					v.pop_back();
				}
				else {
					key = 0;
					break;
				}
			}
			if (key == 0)break;
		}
		
	}
	long long sum1 = 0;
	if (key == 1) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] < 0) {
				key = 0;
				break;
			}
			sum1 += v[i];
		}
		cout << sum1;
	}
	else cout << 0;
}