#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	while (N--) {
		string str;
		cin >> str;
		cout << str.front() << str.back()<<"\n";
		// cout << *str.begin() << *(str.end()-1)<<"\n";
	}
}