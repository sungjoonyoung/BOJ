#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	int M=0, Y=0;
	while (N--) {
		int in;
		cin >> in;
		Y += (in / 30) * 10 + 10;
		M += (in / 60) * 15 + 15;
	}
	if (M < Y)cout << "M " << M;
	else if (M > Y)cout << "Y " << Y;
	else cout << "Y M " << M;
}