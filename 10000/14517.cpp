#include<iostream>
#define ll long long
using namespace std;
ll dp[1000][1000]; // s e
ll MOD=10'007;
void solve(void) {
    string str;cin>>str;
    for(int e=0;e<str.size();e++){
        //1
        dp[e][e]=1;
        //2
        if(e>0){
            dp[e-1][e]=2;
            if(str[e-1]==str[e])dp[e-1][e]++;
        }
        for(int s=e-2;s>=0;s--){
            dp[s][e]+=dp[s][e-1];
            dp[s][e]+=dp[s+1][e];
            dp[s][e]-=dp[s+1][e-1];
            dp[s][e]+=MOD*2;
            if(str[s]==str[e])dp[s][e]+=dp[s+1][e-1]+1;
            dp[s][e]%=MOD;
        }
    }
    // cout<<dp[0][2];
    // cout<<"\n";
    cout<<dp[0][str.size()-1];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}