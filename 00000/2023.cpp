#include<iostream>
#include<vector>
using namespace std;
vector<int> arr[9];
bool primefunc(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	arr[1].push_back(2);
	arr[1].push_back(3);
	arr[1].push_back(5);
	arr[1].push_back(7);
	int ten = 1;
	for (int i = 2; i <= N; i++) {
		ten *= 10;
		for (int j = 0; j < arr[i - 1].size(); j++) {
			for (int k = 1; k < 10; k+=2) {
				int tmp = arr[i - 1][j] * 10 + k;
				if (primefunc(tmp))arr[i].push_back(tmp);
			}
		}
	}
	for (int i = 0; i < arr[N].size(); i++)cout << arr[N][i]<<"\n";
}
bool primefunc(int x) {
	for (int i = 2; i < x; i++)if (x % i == 0)return 0;
	return 1;
}

