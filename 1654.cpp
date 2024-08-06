#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M, max;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	
	int i1=1, i2=v.back()+1, le, tmp;
	while (1) {
		int count = 0;
		le = (i2 - i1)/2;
		tmp = i1 + le;
		for (int i = 0; i < N; i++) {
			count += v[i] / tmp;
		}

		if (i2 - i1 == 1) {
			cout << i1;
			break;
		}

		if (count < M)i2 = tmp;
		else if (count >= M)i1 = tmp;
	
	}

}