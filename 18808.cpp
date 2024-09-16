#include<iostream>
using namespace std;

int main(void) {
	int S, T, D;
	cin >> S >> T >> D;
	S *= 2;
	D /= S;
	cout << T * D;
}