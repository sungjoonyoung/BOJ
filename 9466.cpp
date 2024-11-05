#include<iostream>
#include<vector>
using namespace std;
void clear(int N);
int func(void);
int arr[100001];
int many[100001];
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--)clear(func());
}
void clear(int N) {
	for (int i = 1; i <= N; i++) {
		arr[i] = 0;
		many[i] = 0;
		v.clear();
	}
}
int func(void) {
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		int in;
		cin >> in;
		arr[i] = in;
		many[in]++;
	}
	for (int i = 1; i <= N; i++)if (many[i] == 0)v.push_back(i);
	int answer = 0;
	while (!v.empty()) {
		int tmp = v.back();
		v.pop_back();
		answer++;
		many[arr[tmp]]--;
		if (many[arr[tmp]] == 0)v.push_back(arr[tmp]);
	}
	cout << answer<<"\n";
	return N;
}