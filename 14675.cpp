#include<iostream>
using namespace std;
int arr[100001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T, a, b;
	cin >> T;
	T--;
	while (T--) {
		cin >> a >> b;
		arr[a]++;
		arr[b]++;
	}
	cin >> T;
	while (T--) {
		cin >> a;
		if (a == 1) {
			cin >> b;
			if (arr[b]>1)cout << "yes\n";
			else cout << "no\n";
		}
		else {
			cin >> b;
			cout << "yes\n";
		}
	}
}