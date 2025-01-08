#include<iostream>
#include<vector>	
using namespace std;
char arr[4][4] = { {'A','C','A','G'},{'C','G','T','A'},{'A','T','C','G'},{'G','A','G','T'} };
vector<char> v;
int ctoi(char c) {
	if (c == 'A')return 0;
	if (c == 'G')return 1;
	if (c == 'C')return 2;
	if (c == 'T')return 3;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char in;
		cin >> in;
		v.push_back(in);
	}
	while (v.size() != 1) {
		char b = v.back();
		v.pop_back();
		char a = v.back();
		v.pop_back();
		v.push_back(arr[ctoi(b)][ctoi(a)]);
	}
	cout << v[0];
}