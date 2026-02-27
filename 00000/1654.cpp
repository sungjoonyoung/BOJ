#include<iostream>
#include<vector>
using namespace std;
vector<long long>v;
int main(void) {
	int N,M;cin>>N>>M;
	v.resize(N);
	for(int i=0;i<N;i++)cin>>v[i];
	long long s=1;
	long long e=(1LL<<31);
	while (s + 1 != e) {
		long long mid=(s+e)/2;
		long long tmp = 0;
		for(int i=0;i<N;i++)tmp+=v[i]/mid;
		if(tmp<M)e=mid;
		else s=mid;
	}
	cout<<s;
}
