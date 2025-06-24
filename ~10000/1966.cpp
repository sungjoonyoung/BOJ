#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int arr[10];
queue<pair<int, int>> q;
vector<int> v;

void PQ(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		PQ();
		for (int i = 0; i < 10; i++)arr[i] = 0;
		if (q.empty() == 1)continue;
		else {
			int size = q.size();
			for (int i = 0; i < size; i++)q.pop();
		}
	}
	//for (int i = 0; i < v.size(); i++) {
	//	cout << i <<" "<< v[i] << "\n";
	//}
}
void PQ(void) {
	int N, idx, answer = 0, count = 1;
	cin >> N >> idx;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		q.push({ x,i });

		if (i == idx) answer = x;
		arr[x]++;
	}

	for (int i = 9; i > 0; i--) {
		while (1) {
			if (arr[i] == 0)break;
			if (i == answer and q.front().second == idx) {
				cout << count << "\n";
				//v.push_back(count);
				return;
			}
			if (q.front().first == i) {
				arr[i]--;
				q.pop();
				count++;
			}
			else {
				int cur_val = q.front().first;
				int cur_ind = q.front().second;

				q.pop();
				q.push({ cur_val,cur_ind });

			}
		}
	}

}