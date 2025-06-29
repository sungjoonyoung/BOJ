#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int a = 0; a < N - i; a++)cout << " ";
		for (int b = 0; b < i; b++)cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= N; i++) {
		for (int a = 0; a <i; a++)cout << " ";
		for (int b = 0; b < N-i; b++)cout << "*";
		cout << "\n";
	}
}