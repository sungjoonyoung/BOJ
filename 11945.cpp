#include<iostream>
#include<string>
using namespace std;
string arr[10];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		arr[i] = str;
	}
	for (int i = 0; i < N; i++) {
		for (int j = M-1; j >= 0; j--) {
			cout<< arr[i][j];
		}
		cout << "\n";
	}
}