#include<iostream>
#define MOD 1'000'000'007
typedef long long ll;
using namespace std;
long long fc[4'000'001];

long long power(long long x,long long y){
    long long out=1;
    long long tmp=x;
    while(y){
        if(y%2){
            out*=tmp;
            out%=MOD;
        }
        y/=2;
        tmp*=tmp;
        tmp%=MOD;
    }
    return out;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fc[0]=1;
    for(long long i=1;i<4'000'001;i++){
        fc[i]=fc[i-1]*i%MOD;
    }
    int T;
    cin>>T;
    while(T--){
		long long N,K;
        cin>>N>>K;
        long long answer=fc[N]%MOD;
        answer*=power(fc[K],MOD-2);
        answer%=MOD;
        answer*=power(fc[N-K],MOD-2);
        answer%=MOD;
        cout<<answer<<"\n";
	}
}