#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[100000];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr[i] = tmp;
	}
	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp;

		int back = N - 1;
		int idx = 0;
		int tong = 0;

		while (1) {
			tong = (back - idx) / 2;

			if (tmp < arr[idx] or arr[back] < tmp) {
				cout << "0" << "\n";
				break;
			}
			else if (arr[idx] == tmp or arr[idx + tong] == tmp or arr[back] == tmp) {
				cout << "1" << "\n";
				break;
			}
			else if (tong < 1) {
				cout << "0" << "\n";
				break;
			}
			else if (tmp < arr[idx + tong]) {
				back = idx + tong;
			}
			else if (arr[idx + tong] < tmp) {
				idx = idx + tong;
			}


		}

	}

}
