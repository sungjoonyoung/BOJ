#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char c;
	cin >> c;
	int answer;
	if (c == 'A') {
		answer = 4;
		char op;
		cin >> op;
		if (op == '+')cout << (double)answer + 0.3;
		else if (op == '0')cout << (double)answer << ".0";
		else if (op == '-')cout << (double)answer - 0.3;
	}
	if (c == 'B') {
		answer = 3;
		char op;
		cin >> op;
		if (op == '+')cout << (double)answer + 0.3;
		else if (op == '0')cout << (double)answer << ".0";
		else if (op == '-')cout << (double)answer - 0.3;
	}
	if (c == 'C') {
		answer = 2;
		char op;
		cin >> op;
		if (op == '+')cout << (double)answer + 0.3;
		else if (op == '0')cout << (double)answer << ".0";
		else if (op == '-')cout << (double)answer - 0.3;
	}
	if (c == 'D') {
		answer = 1;
		char op;
		cin >> op;
		if (op == '+')cout << (double)answer + 0.3;
		else if (op == '0')cout << (double)answer << ".0";
		else if (op == '-')cout << (double)answer - 0.3;
	}
	if (c == 'F')cout << "0.0";
}