#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> v(101);
vector<int> stack;
bool arr[101];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, x, y, count;
	cin >> N;
	cin >> M;
	count = 0;
	arr[1] = 1;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
		if (x == 1) {
			stack.push_back(y);
			arr[y] = 1;
			count++;
		}
		if (y == 1) {
			stack.push_back(x);
			arr[x] = 1;
			count++;
		}
	}
	
	while (stack.size() != 0) {
		int tmp = stack.back();
		stack.pop_back();
		for (int i = 0; i < v[tmp].size(); i++) {
			if (arr[v[tmp][i]] == 0) {
				arr[v[tmp][i]] = 1;
				count++;
				stack.push_back(v[tmp][i]);
			}
		}
	}
	cout << count;
}