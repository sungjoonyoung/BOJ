#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;

int ssoi(int x);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, tmp, sum=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
		sum += tmp;
	}
	sort(v.begin(), v.end());
	int N1 = N;
	N *= 10;
	N *= 15;
	N /= 100;
	int weird = ssoi(N);
	for (int i = 0; i < weird; i++) {
		sum -= v[i];
		sum -= v[N1 - i - 1];
	}
	sum *= 10;
	if (N1 - 2 * weird == 0)cout << "0";
	else {
		sum /= N1 - 2 * weird;
		cout << ssoi(sum);
	}
	
}
int ssoi(int x) {
	if (x % 10 < 5) {
		return x / 10;
	}
	else return (x / 10) + 1;
}