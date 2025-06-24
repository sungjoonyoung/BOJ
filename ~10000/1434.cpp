#include<iostream>
#include<vector>
using namespace std;
vector<int> box;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		box.push_back(in);
	}
	int ind = 0;
	int answer = 0;
	for (int i = 0; i < M; i++) {
		int in;
		cin >> in;
		while (box[ind] - in < 0) {
			answer += box[ind];
			ind++;
		}
		box[ind] -= in;
	}
	for (int i = ind; i < box.size(); i++)answer += box[i];
	cout << answer;
}