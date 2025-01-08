#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v(4);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	int answer = 0;
	while (T--) {
		int tmp;
		for (int i = 0; i < 4; i++)cin >> v[i];
		sort(v.begin(), v.end(),greater<int>());
		if (v[0] == v[1] and v[1] == v[2] and v[2] == v[3]) {
			tmp = 50000 + v[0] * 5000;
		}
		else if (v[0] == v[1] and v[1] == v[2] or v[1] == v[2] and v[2] == v[3]) {
			if (v[0] == v[1])tmp = 10000 + v[0] * 1000;
			else if (v[2] == v[3])tmp = 10000 + v[3] * 1000;
		}
		else if (v[0] == v[1] and v[2] == v[3]){
			tmp = 2000 + v[0] * 500 + v[3] * 500;
		}
		else if (v[0] == v[1] or v[1] == v[2] or v[2] == v[3]) {
			if (v[0] == v[1])tmp = 1000 + v[0] * 100;
			else if (v[1] == v[2])tmp = 1000 + v[1] * 100;
			else if (v[2] == v[3])tmp = 1000 + v[2] * 100;
		}
		else {
			tmp = v[0] * 100;
		}
		answer = max(answer, tmp);
	}
	cout << answer;
}