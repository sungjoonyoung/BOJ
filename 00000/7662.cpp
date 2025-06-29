#include<iostream>
#include<set>
using namespace std;
multiset<int> s;
void func(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--)func();
}
void func(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;
		if (c == 'I') {
			int x;
			cin >> x;
			s.insert(x);
		}
		else {
			int x;
			cin >> x;
			if (s.empty())continue;
			else if (x == 1) {
				int tmp = *prev(s.end());
				s.erase(s.find(tmp));
			}
			else if (x == -1) {
				int tmp = *s.begin();
				s.erase(s.find(tmp));
			}
		}
	}
	if (s.empty())cout << "EMPTY\n";
	else cout << *prev(s.end())<<" " << *s.begin()<<"\n";
	s.clear();
	return;
}