#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	while (N--) {
		string str;
		cin >> str;
		cout << *str.begin() << *(str.end()-1)<<"\n";
	}
}