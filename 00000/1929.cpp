#include<iostream>
#include<vector>
using namespace std;

bool primearr[1000001];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	primearr[2] = 0;
	primearr[1] = 1;
	primearr[0] = 1;

	for (int i = 4; i <= 1000000; i += 2) {
		primearr[i] = 1;
	}
	int M, N;
	cin >> M >> N;
	for (int i = 3; i < 1000000; i+=2) {
		if (primearr[i] == 0) {
			for (int j = i*2; j <= 1000000; j += i) {
				primearr[j] = 1;
			}
		}
		else continue;
	}
	for (int i = M; i <= N; i++) if (primearr[i] == 0) cout << i<<" ";
}