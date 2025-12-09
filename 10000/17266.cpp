#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
int dp[100'003];
void solve(void){
    int N;cin>>N;
    int M;cin>>M;
    for(int i=1;i<=M;i++)cin>>dp[i];
    dp[0]-=dp[1];
    dp[M+1]=dp[M]+(N-dp[M])*2;
    int answer=-1;
    for(int i=1;i<=M+1;i++){
        // cout<<dp[i]<<" ";
        answer=max(answer,dp[i]-dp[i-1]);
    }
    cout<<(answer+1)/2;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}