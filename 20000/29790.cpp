#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, U, L;
	cin >> N >> U >> L;
	if (N >= 1000) {
		if (U >= 8000 or L >= 260)cout << "Very Good";
		else cout << "Good";
	}
	else cout << "Bad";
}