#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int N;
long long pac[21];
void one(void);
void two(void);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	int op;
	cin >> op;
	long long tmp = 1;
	for (long long i = 1; i < 21; i++) {
		tmp *= i;
		pac[i] = tmp;
	}
	pac[0] = 1;
	if (op == 1)one();
	else two();
}
void one(void) {
	long long k;
	cin >> k;
	k--;
	vector<int> v(N);
	for (int i = 0; i < N; i++)v[i] = i + 1;
	for (int i = N-1; i >= 0; i--) {
		cout << v[k / pac[i]] << " ";
		v.erase(v.begin() + k / pac[i]);
		k %= pac[i];
	}
}
void two(void) {
	vector<int> v(N);
	for (int i = 0; i < N; i++)cin>>v[i];
	vector<int> sv = v;
	sort(sv.begin(), sv.end());
	long long answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < sv.size(); j++) {
			if (v[i] == sv[j]) {
				answer += (long long)j * pac[N - i - 1];
				//cout << (long long)j * pac[N - i - 1] << "\n";
				sv.erase(sv.begin() + j);
				break;
			}
		}
	}
	cout << answer+1;
}