#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
vector<pair<int, int>> ch;
vector<pair<int, int>> home;
vector<pair<int, int>> table;
void func(int x, int count);
int N, M, in;
void find(void);
long long answer = 100000000;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) {
		cin >> in;
		if (in == 1)home.push_back({ i,j });
		else if (in == 2) ch.push_back({ i,j });
	}
	func(0, 0);
	cout << answer;
}
void func(int x, int count) {
	//cout << x << count << "A\n";
	if (count == M) {
		find();
		return;
	}
	if (x == ch.size()) return;
	table.push_back({ ch[x].first,ch[x].second });
	func(x + 1, count + 1);
	table.pop_back();
	func(x + 1, count);
	return;
}
void find(void) {
	long long tmpanswer = 0;
	
	for (int i = 0; i < home.size(); i++) {
		long long tmp = 100000000;
		for (int j = 0; j < table.size(); j++) {
			long long distance = abs(home[i].first - table[j].first) + abs(home[i].second - table[j].second);
			tmp = min(tmp, distance);
		}
		tmpanswer += tmp;
	}
	answer = min(answer, tmpanswer);
}