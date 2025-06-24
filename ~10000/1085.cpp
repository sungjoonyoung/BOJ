#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min({x,y,w-x,h-y});
}