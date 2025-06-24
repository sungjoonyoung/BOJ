#include<iostream>
#include<vector>
using namespace std;
vector<int> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int pivot=-1;
	for(int i=0;i<N;i++){
		int in;
		cin >> in;
		v.push_back(in);
	}
	int idx1=0, idx2=v.size()-1;
	int answer = 2000000000;
	int ansidx1=0, ansidx2= v.size() - 1;
	bool key = 1;
	while (idx1 != idx2) {
		if (answer >= abs(v[idx1] + v[idx2])) {
			answer = abs(v[idx1] + v[idx2]);
			ansidx1 = idx1;
			ansidx2 = idx2;
		}

		if (abs(v[idx1]) < abs(v[idx2])) {
			idx2--;
		}
		else if (abs(v[idx1]) > abs(v[idx2])) {
			idx1++;
		}
		else {
			cout << v[idx1] << " " << v[idx2];
			key = 0;
			break;
		}
	}
//	cout << ansidx1 << " " << ansidx2;
	if (key)cout << v[ansidx1] << " " << v[ansidx2];
}