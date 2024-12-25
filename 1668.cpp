#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	int max = 0;
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		if (max < v[i]) {
			max = v[i];
			count++;
		}
	}
	cout << count<<"\n";
	max = 0;
	count = 0;
	for (int i = v.size() - 1; i > -1; i--) {
		if (max < v[i]) {
			max = v[i];
			count++;
		}
	}
	cout << count;
}