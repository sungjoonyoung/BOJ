#include<iostream>;
#include<vector>
using namespace std;
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long answer = 0;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		v.push_back(in);
	}
	for (int i = 1; i <= M; i++) {
		for (int j = 0; j < v.size(); j++) {
			if (i % v[j]==0) {
				answer++;
				break;
			}
		}
	}
	cout << answer;
}