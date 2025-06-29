#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> lo;
vector<int> sh;
void ant(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		ant();
		lo.clear();
		sh.clear();
	}
}
void ant(void) {
	int n, l, a;
	cin >> l>>n;
	while (n--) {
		cin >> a;
		lo.push_back(max(a, l - a));
		sh.push_back(min(a, l - a));
	}
	sort(lo.begin(), lo.end());
	sort(sh.begin(), sh.end());
	cout << sh.back() << " " << lo.back()<<"\n";
	return;
}