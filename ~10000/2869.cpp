#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int A, B, V;
	cin >> A >> B >> V;
	int day = 0;
	V -= A;
	day = V / (A - B);
	day--;
	day--;
	int sum = day * (A - B);
	V += A;
	while (1) {
		day++;
		sum += A;
		if (sum > V or sum == V) {
			cout << day;
			break;
		}
		sum -= B;
	}
}