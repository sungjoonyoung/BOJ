#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, B, H, W;
	cin >> N >> B >> H >> W;
	int answer = 500001;
	while (H--){
		int p;
		cin >> p;
		for(int i=0;i<W;i++){
			int in;
			cin >> in;
			if (in >= N and p * N <= B)answer = min(answer, p * N);
		}
	}
	if (answer == 500001)cout << "stay home";
	else cout << answer;
}