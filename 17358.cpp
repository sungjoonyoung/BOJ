#include<iostream>
using namespace std;
unsigned long long dp[100001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin>>N;
    dp[0]=1;
    dp[2]=1;
    for(unsigned long long i=4;i<100001;i+=2){
        dp[i]=dp[i-2];
        dp[i]%=1000000007;
        unsigned long long tmp=dp[i-4]*(i-2)%1000000007;
        tmp=tmp*(i-3)%1000000007;
        dp[i]+=tmp;
        dp[i]%=1000000007;
    }
    cout<<dp[N];
}