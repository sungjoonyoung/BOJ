#include<iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	long long answer = 1;
	for (int i = 1; i <= N; i++) answer *= i;
	cout << answer;
}