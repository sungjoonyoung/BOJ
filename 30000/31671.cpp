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
int dp[2001][2001];
int ssam[2001][2001];
queue<pair<int,pii>> q;
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=0;i<M;i++){
        int x,y;cin>>x>>y;
        ssam[x][y]=1;
    }
    dp[0][0]=1;
    // if(ssam[1][1]){cout<<"-1";return;}
    for(int i=1;i<=2*N;i++){
        for(int j=0;j<=min(i,N*2-i);j++){
            if(ssam[i][j])continue;
            if(j+1<=min((i-1),N*2-(i-1))){
                dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
            }
            if(0<=j-1){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
            }
            if(dp[i][j]){
                dp[i][j]=max(dp[i][j],j);
            }
        }
    }
    if(dp[2*N][0]==0)cout<<"-1";
    else cout<<dp[2*N][0];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}