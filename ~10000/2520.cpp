#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		float m, e, s, n, f;
		cin >> m >> e >> s >> n >> f;
		int man = 16*min({ m / 8 ,e / 8,s / 4,n / 1,f / 9 });
		int ba, st, ch, ho;
		cin >> ba >> st >> ch >> ho;
		st /= 30;
		ch /= 25;
		ho /= 10;
		ba += st + ch + ho;
		if (ba < man)cout << ba << "\n";
		else cout << man<<"\n";
	}
}