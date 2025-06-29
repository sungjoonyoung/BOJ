#include<iostream>
#include<vector>
using namespace std;
vector<int> prime;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	prime.push_back(2);
	int N, M;
	cin >> N >> M;
	long long answer = 0;
	int min = -1;
	for (int i = 1; i <= M; i++) {
		for (int j = 0; j < prime.size(); j++) {
			if (i % prime[j]==0) {
				if (i == 2 and i >= N) {
					answer += 2;
					min = 2;
				}
				break;
			}
			if (j == prime.size() - 1 and i != 1) {
				prime.push_back(i);
				if (i >= N)answer += i;
				if (min == -1 and i >= N)min = i;
			}
		}
	}
	if (answer == 0)cout << "-1";
	else {
		cout << answer<<"\n"<<min;
	}
}
