#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
	double D, H, W;
	cin >> D >> H >> W;
	double answer = D * D / (H * H + W * W);
	answer = sqrt(answer);
	cout << (int)(H * answer) << " " << (int)(W * answer);
}