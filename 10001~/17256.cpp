#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int ax, ay, az;
	int bx, by, bz;
	int cx, cy, cz;
	cin >> ax >> ay >> az;
	cin >> cx >> cy >> cz;
	cout << cx - az <<" "<< cy / ay <<" " << cz - ax;
}