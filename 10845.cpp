#include <iostream>
#include <string>
using namespace std;
int arr[10001];
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
				cout << arr[0] << "\n";

				for (int i = 0; i < idx ; i++) {
					arr[i] = arr[i+1];
				}
				idx--;
			}


			else cout << "-1" << "\n";
		}
		if (op == "size") {
			cout << idx << "\n";

		}
		if (op == "empty") {
			if (idx > 0) cout << "0" << "\n";
			else cout << "1" << "\n";
		}
		if (op == "front") {
			if (idx > 0) cout << arr[0] << "\n";
			else cout << "-1" << "\n";
		}
		if (op == "back") {
			if (idx > 0) cout << arr[idx-1] << "\n";
			else cout << "-1" << "\n";
		}
	}
	
}