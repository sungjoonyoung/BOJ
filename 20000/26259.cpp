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
int dp[1001][1001];
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=1;i<=N;i++)for(int j=1;j<=M;j++)cin>>dp[i][j];
    int wall[2][2];
    dp[1][1]+=2'000'000'000;
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)cin>>wall[i][j];
    if(wall[0][0]>wall[1][0])swap(wall[0][0],wall[1][0]);
    if(wall[0][1]>wall[1][1])swap(wall[0][1],wall[1][1]);
    int op=(wall[0][0]==wall[1][0]); // 1이면 가로
    for(int i=1;i<=N;i++)for(int j=1;j<=M;j++){
        if(op and wall[0][1]<j and j<=wall[1][1] and i==wall[0][0]+1)dp[i][j]+=dp[i][j-1];
        else if(!op and wall[0][0]<i and i<=wall[1][0] and j==wall[0][1]+1)dp[i][j]+=dp[i-1][j];
        else dp[i][j]+=max(dp[i-1][j],dp[i][j-1]);
    }
    if(dp[N][M]>=1'000'000'000)cout<<dp[N][M]-2'000'000'000;
    else cout<<"Entity";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}