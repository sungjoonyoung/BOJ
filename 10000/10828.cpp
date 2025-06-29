#include <iostream>
#include <string>
using namespace std;

int arr[10000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, tmp, idx;
	string op;
	idx = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> op;
		if (op == "push") {
			cin >> tmp;
			arr[idx] = tmp;
			idx++;
		}
		if (op == "pop") {
			if (idx > 0) {
				idx--;
				cout << arr[idx]<< "\n";
				arr[idx] = 0;
			}
			else cout << "-1"<< "\n";
		}
		if (op == "size") {
			cout << idx<<"\n";
			
		}
		if (op == "empty") {
			if (idx > 0) cout << "0"<<"\n";
			else cout << "1"<< "\n";
		}
		if (op == "top") {
			if (idx > 0) {
				idx--;
				cout << arr[idx]<<"\n";
				idx++;
			}
			else cout << "-1"<<"\n";
		}
	}

}