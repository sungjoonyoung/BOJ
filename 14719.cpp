#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int arr[501];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int H, W;
	cin >> H >> W;
	for (int i = 0; i < W; i++)cin >> arr[i];
	int answer = 0;
	for (int i = H; i > 0; i--) {
		int tmp = 0;
		bool key = 0;
		for (int j = 0; j < W; j++) {
			if (!key and arr[j] < i)continue;
			if (key and arr[j] < i)tmp++;
			if (arr[j] >= i) {
				if (key) {
					answer += tmp;
					tmp = 0;
				}
				else {
					key = 1;
				}
			}
			/*else if (j == W - 1 and arr[j] < i) {
				tmp = 0;
				break;
			}*/
			
		}
	}
	cout << answer;
}