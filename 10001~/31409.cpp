#include<iostream>
#include<vector>
using namespace std;
vector<int> out;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, in;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> in;
		if (in == i) {
			out.push_back(-1);
			v.push_back(in);
		}
		else out.push_back(in);
	}
	if (v.empty()) {
		cout << "0\n";
		for (int i = 0; i < N; i++)cout << out[i]<<" ";
	}
	else {
		int index = 1;
		if (v.size() == 1) {
			cout << "1" << "\n";
			if (v[0] == 1) {
				cout << "2 ";
				for (int i = 1; i < N; i++)cout << out[i] << " ";
			}
			else {
				for (int i = 0; i < N; i++) {
					if (out[i] == -1) {
						cout << "1 ";
					}
					else {
						cout << out[i]<<" ";
					}
				}
			}
		}
		else {
			v.push_back(v.front());
			cout << v.size()-1 << "\n";
			for (int i = 0; i < N; i++) {
				if (out[i] == -1) {
					cout << v[index] << " ";
					index++;
				}
				else {
					cout << out[i] << " ";
				}
			}
		}
	}
}