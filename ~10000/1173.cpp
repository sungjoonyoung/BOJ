#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;
	int count = 0;
	int now = m;
	int answer = 0;
	while (1) {
		if (count == N) cout << answer;
		else if (now + T<=M) {
			now += T;
			count++;
			answer++;
			continue;
		}
		else if(now!=m){
			now -= R;
			answer++;
			if (now < m)now = m;
			continue;
		}
		break;
	}
	
	if (count != N)cout << -1;
}