#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
ll dp[4001][2001];
void solve(void) {
    ll N,mod;cin>>N>>mod;
    dp[0][0]=1;
    for(ll i=1;i<=N;i++){
        for(ll j=1;j<=min(i,N-i);j++){
            if(j+1<=min((i-1),N-(i-1))){
                dp[i][j]+=dp[i-1][j+1];
                dp[i][j]%=mod;
            }
            if(0<=j-1){
                dp[i][j]+=dp[i-1][j-1];
                dp[i][j]%=mod;
            }
            dp[i][j]%=mod;
        }
    }
    // cout<<dp[1][1]<<"\n";
    cout<<dp[N-1][1]%mod;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}