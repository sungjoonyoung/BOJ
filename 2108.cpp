#include <iostream>
#include <string>
using namespace std;

int arrsum[500000];
int many[8001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int MAX, MIN, N, tmp, sum;
	sum = 0;
	MAX = -4000;
	MIN = 4000;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		sum += tmp;
		arrsum[i] = sum;
		if (tmp > MAX)MAX = tmp;
		if (tmp < MIN)MIN = tmp;
		many[tmp + 4000]++;
	}


	int minus = 0;
	if (arrsum[N - 1] < 0) {
		minus = 1;
		arrsum[N - 1] = 0 - arrsum[N - 1];
	}
	float tmp1;
	tmp1 = float(arrsum[N - 1]);
	tmp1 = tmp1 / N;
	tmp1 = tmp1 - float(arrsum[N - 1] / N);

	if (tmp1 == 0.5 or tmp1 > 0.5) arrsum[N - 1]=  arrsum[N - 1] / N + 1;
	else arrsum[N - 1]= arrsum[N - 1] / N;

	if (minus == 1) cout << 0 - arrsum[N - 1] << "\n";
	else cout << arrsum[N - 1] << "\n";

	
	

	int a=0;
	int ttt;
	int fi=1;
	N = N / 2 + 1;
	for (int i = 0; i < 8001; i++) {

		if (many[i] == a && fi == 1) {
			ttt = i;
			fi = 0;
		}
		if (many[i] > a) {
			a = many[i];
			ttt = i;
			fi = 1;
		}
		

		if (N < 0)continue;
		if (many[i] == N or N < many[i]) {
			cout << i - 4000 << "\n";
			N = -1;
		}
		else N -= many[i];
	}
	cout << ttt-4000 <<"\n";

	cout << MAX - MIN << "\n";

}