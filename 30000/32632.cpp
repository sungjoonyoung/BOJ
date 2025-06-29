#include<iostream>
#include<vector>
using namespace std;
int K, N;
vector<int> so;
bool che[1000001];
void soinsoo(void) {
	int tmpK = K;
	for (int i = 2; i <= N; i++) {
		if (tmpK == 1)return;
		while (tmpK % i==0) {
			tmpK /= i;
			if (so.empty() or so.back() != i)so.push_back(i);
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> K >> N;
	soinsoo();
	if (K == 1) {
		cout << N - 1;
		return 0;
	}
	if (K % 2) {
		int count = 0;
		for (int i = 0; i < so.size(); i++) {
			for (int j = 1; j * so[i] <= N; j++)che[j*so[i]] = 1;
		}
		for (int i = 1; i <= N; i++)if (!che[i])count++;
		//cout << che[1] << che[2] << che[3] << che[4];
		cout << count - (K==1);
	}

	else {
		int count = 0;
		for (int i = 0; i < so.size(); i++) {
			for (int j = 1; j * so[i] <= N; j++)che[j * so[i]] = 1;
		}
		for (int i = 1; i <= N; i++) {
			if (!che[i]) {
				count++;
				if (K % 4 != 0) {
					int tmp = i;
					while(1){
						tmp *= 2;
						if (tmp > N)break;
						if (tmp == K)continue;
						count++;
						
					}
				}
				else {
					if (i * 2 <= N)count++;
				}
			}
			/*if (K % 4 == 0) {
				if (!che[i] and i * 2 <= N and i != 1)count++;
			}*/
		}
		
		cout << count;
	}
}