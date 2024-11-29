#include<iostream>
using namespace std;
long long answer[5][5];
long long tmp[5][5];
long long table[5][5];
long long N, in;
void dou(void);
void tmpd(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> in;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)if (i == j)answer[i][j] = 1;
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)cin >> tmp[i][j];
	while (in) {
		if (in % 2) {
			tmpd();
			dou();
			in /= 2;
		}
		else {
			dou();
			in /= 2;
		}
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)cout << answer[i][j] << " ";
		cout << "\n";
	}
}
void dou(void) {
	//tmp*tmp
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) {
		table[i][j] = 0;
		for (int k = 0; k < N; k++) {
			table[i][j] += tmp[i][k] * tmp[k][j];
			table[i][j] %= 1000;
		}
	}
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)tmp[i][j] = table[i][j];
}
void tmpd(void) {
	//ans*tmp
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) {
		table[i][j] = 0;
		for (int k = 0; k < N; k++) {
			table[i][j] += answer[i][k] * tmp[k][j];
			table[i][j] %= 1000;
		}
	}
	for (int i = 0; i < N; i++)for (int j = 0; j < N; j++)answer[i][j] = table[i][j];
}