#include <iostream>
#include <string>
using namespace std;

int sum[1024][1024];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, tmp, tmpsum;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		tmpsum = 0;
		for (int j = 0; j < N; j++) {
			cin >> tmp;
			tmpsum += tmp;
			sum[i][j] = tmpsum;
		}
	}
	int x1, x2, y1, y2;

	for (int i = 0; i < M; i++) {
		cin >> y1 >> x1 >> y2 >> x2;
		x1 -= 1;
		x2 -= 1;
		y1 -= 1;
		y2 -= 1;
		tmp = 0;
		for (y1; y1 < y2 + 1; y1++) {
			if (x1 == 0) {
				tmp += sum[y1][x2];

				continue;
			}
			tmp += sum[y1][x2] - sum[y1][x1 - 1];

		}
		cout << tmp << "\n";
	}
}