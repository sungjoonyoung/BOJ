#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	char M;
	cin >> N >> M;
	int count = 0;
	int num = 0;
	while (1) {
		num++;
		bool key = 0;
		string str = to_string(num);
		for (auto c : str) {
			if (c == M) {
				key = 1;
				break;
			}
		}
		if (key)continue;
		count++;
		if (count == N) {
			cout << str;
			return 0;
		}
	}
}