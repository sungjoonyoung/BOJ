#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> A;
vector<long long> B;
vector<long long> C;
vector<long long> D;
vector<long long> AB;
vector<long long> CD;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		A.push_back(a);
		B.push_back(b);
		C.push_back(c);
		D.push_back(d);
	}
	for (int i = 0; i < A.size(); i++)for (int j = 0; j < B.size(); j++)AB.push_back(A[i] + B[j]);
	for (int i = 0; i < C.size(); i++)for (int j = 0; j < D.size(); j++)CD.push_back(C[i] + D[j]);
	sort(AB.begin(), AB.end());
	sort(CD.begin(), CD.end());
	long long answer = 0;
	long long ind1 = 0;
	long long ind2 = CD.size() - 1;
	while (1) {
		if (ind2 == -1 or ind1 == N * N)break;
		long long tmp = AB[ind1] + CD[ind2];
		if (tmp > 0)ind2--;
		else if (tmp < 0)ind1++;
		else {
			long long tmpAB = AB[ind1];
			long long tmpCD = CD[ind2];
			long long tmpa = 0;
			long long tmpb = 0;
			while (ind1 < N*N && AB[ind1] == tmpAB) {
				tmpa++;
				ind1++;
			}
			while (ind2 > -1 && CD[ind2] == tmpCD) {
				tmpb++;
				ind2--;
			}
			answer += tmpb * tmpa;
		}
	}
	cout << answer;
}