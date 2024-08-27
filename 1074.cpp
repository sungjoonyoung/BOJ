#include<iostream>
using namespace std;
void dp(int x1, int x2, int y1, int y2, int r, int c, int w);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, r, c, N=1;
	cin >> n >> r >> c;
	for (int i = 0; i < n; i++)N *= 2;
	dp(0, N-1, 0, N-1, r, c, 0);
}
void dp(int x1, int x2, int y1, int y2, int r, int c, int w) {
	if (x1 + 1 == x2) {
		if (r == x1 and c == y1)cout << w;
		else if (r == x1 and c == y2) cout << w + 1;
		else if (r == x2 and c == y1) cout << w + 2;
		else if (r == x2 and c == y2) cout << w + 3;
		return;
	}
	int midx = (x1 + x2) / 2;
	int midy = (y1 + y2) / 2;
	int len = (x2 - x1+1) / 2;
	if (r <= midx and c <= midy)dp(x1, midx, y1, midy, r, c, w + 0);
	else if (r > midx and c <= midy)dp(midx+1, x2, y1, midy, r, c, w + 2 * len * len);
	else if (r > midx and c > midy)dp(midx+1, x2, midy+1, y2, r, c, w + 3 * len * len);
	else if (r <= midx and c > midy)dp(x1, midx, midy+1, y2, r, c, w + 1 * len * len);
}