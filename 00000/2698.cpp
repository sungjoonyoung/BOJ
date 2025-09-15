#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
ll dp[101][2][101];
void solve(void){
    for(int i=0;i<101;i++)for(int j=0;j<2;j++)for(int k=0;k<101;k++)dp[i][j][k]=0;
    // for(int i=0;i<101;i++)dp[0][0][i]=1;
    dp[0][0][0]=1;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){
           dp[i][1][j]+=dp[i-1][0][j]; 
           dp[i][0][j]+=dp[i-1][0][j]+dp[i-1][1][j]; 
           if(j)dp[i][1][j]+=dp[i-1][1][j-1];
        }
    }
    ll answer=0;
    cout<<dp[n][0][k]+dp[n][1][k]<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int T=1;
    cin>>T;
    while(T--)solve();
}