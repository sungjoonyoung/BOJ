#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-i; j++)if(j!=0)cout << " ";
		for (int j = 0; j < i * 2 + 1; j++) cout << "*";
		cout << "\n";
	}
}