#include<iostream>
#include<vector>
using namespace std;
bool arr[1000001];
bool che[1000001];
vector<long long> p2;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long minnum, maxnum;
	cin >> minnum >> maxnum;
	for (long long i = 2; i < 1000001; i++) {
		if (che[i])continue;
		p2.push_back(i * i);
		for (long long j = 1; i * j < 1000001; j++)che[i * j] = 1;
	}
	minnum--;
	long long answer = 0;
	for (int i = 0; i < p2.size(); i++) {
		long long tmpmn = minnum / p2[i];
		long long tmpmx = maxnum / p2[i];
		if (tmpmx == 0)break;
		//if (tmpmn == tmpmx)break;
		for (long long j = tmpmn; j <= tmpmx; j++) {
			long long tmp = p2[i] * (j + 1) - minnum;
			if (tmp > maxnum - minnum)break;
			arr[tmp] = 1;
		}
	}
	for (int i = 1; i <= maxnum - minnum; i++)if (arr[i] == 0)answer++;
	cout << answer;
}