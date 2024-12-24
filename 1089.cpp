#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
char table[5][40] = {
	"###...#.###.###.#.#.###.###.###.###.###",
	"#.#...#...#...#.#.#.#...#.....#.#.#.#.#",
	"#.#...#.###.###.###.###.###...#.###.###",
	"#.#...#.#.....#...#...#.#.#...#.#.#...#",
	"###...#.###.###...#.###.###...#.###.###"
};
char arr[5][40];
vector<int> answer[10];
long long sumarr[10];
long long out = 0;
int N;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int j = 0; j < 5; j++)for (int i = 0; i < 4 * N - 1; i++)cin >> arr[j][i];
	int ind = 0;
	while (ind < 4 * N) {
		for (int k = 0; k < 10; k++) {
			bool key = 0;
			for (int i = 0; i < 5; i++) for (int j = ind; j < ind + 3; j++) {
				if (arr[i][j] == '#' and table[i][(k*4)+j - ind] == '.')key = 1;
			}
			if (key)continue;
			answer[ind/4].push_back(k);
		}
		ind+=4;
	}
	for (int i = 0; i < N; i++) if (answer[i].empty()) {
		cout << "-1";
		return 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < answer[i].size(); j++)sumarr[i] += answer[i][j];
	}
	long long man = 1;
	for (int i = 0; i < N; i++) man *= answer[i].size();
	for (int i = 0; i < N; i++) {
		out += sumarr[i] * man / answer[i].size() * pow(10, N - i - 1);
	}
	cout << (long double)out / man;
}
