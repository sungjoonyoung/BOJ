#include<iostream>
using namespace std;
void battle(int x);
int main(int x) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i=1;i<=T;i++) battle(i);
}
void battle(int x) {
	int a=0, b=0, in;
	cin >> in;
	a += in * 1;
	cin >> in;
	a += in * 2;
	cin >> in;
	a += in * 3;
	cin >> in;
	a += in * 3;
	cin >> in;
	a += in * 4;
	cin >> in;
	a += in * 10;
	cin >> in;
	b += in * 1;
	cin >> in;
	b += in * 2;
	cin >> in;
	b += in * 2;
	cin >> in;
	b += in * 2;
	cin >> in;
	b += in * 3;
	cin >> in;
	b += in * 5;
	cin >> in;
	b += in * 10;
	if (a == b) cout << "Battle "<<x<<": No victor on this battle field\n";
	else if (a < b) cout << "Battle " << x << ": Evil eradicates all trace of Good\n";
	else if (a > b) cout << "Battle " << x << ": Good triumphs over Evil\n";
	return;
}