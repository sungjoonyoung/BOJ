#include<iostream>
#include<vector>
using namespace std;
int N, K;
vector<int> p;
int arrtoche[4000001];
int primemany[4000001];
void findp(void);
void brcktoprime(int x, bool b);
long long spl(int i);

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> K;
	findp();
	brcktoprime(N, 1);
	brcktoprime(K, 0);
	brcktoprime(N - K, 0);
	
	long long answer = 1;
	for (int i = 0; i < p.size(); i++) {
		if (primemany[i] == 0)continue;
		answer *= spl(i);
		answer %= 1000000007;
	}
	cout << answer;
}
long long spl(int i) {
	int many = primemany[i];
	long long tmp = p[i];
	long long out = 1;
	while (many != 1) {
		if (many % 2 == 1) {
			out *= tmp;
			tmp *= tmp;
			tmp %= 1000000007;
			out %= 1000000007;
			many /= 2;
		}
		else {
			tmp *= tmp;
			tmp %= 1000000007;
			many /= 2;
		}
	}
	return (out * tmp)%1000000007;
}
void brcktoprime(int x, bool b) {
	for (int i = 0; i < p.size(); i++) {
		long long tmp = p[i];
		if(b==1)while (tmp<=x) {
			primemany[i] += x / tmp;
			tmp *= p[i];
		}
		else if(b == 0)while (tmp <= x) {
			primemany[i] -= x / tmp;
			tmp *= p[i];
		}
	}
}
void findp(void) {
	for (int i = 2; i <= N; i++) {
		if (arrtoche[i])continue;
		p.push_back(i);
		for (int j = 1; j * i <= N; j++) {
			arrtoche[j*i] = 1;
		}
	}
}