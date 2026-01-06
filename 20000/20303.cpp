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
int P[30'001];
int W[30'001];
int G[30'001];
int dp[30'001][3001];
int find(int x){
    if(x==P[x])return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    W[py]+=W[px];W[px]=0;
    G[py]+=G[px];G[px]=0;
    P[px]=py;
}
void solve(void) {
    int N,M,K;cin>>N>>M>>K;
    for(int i=1;i<=N;i++)cin>>W[i];
    for(int i=1;i<=N;i++)P[i]=i;
    for(int i=1;i<=N;i++)G[i]=1;
    while(M--){
        int a,b;cin>>a>>b;
        if(find(a)==find(b))continue;
        uni(a,b);
    }
    for(int i=1;i<=N;i++){
        for(int j=0;j<K;j++)dp[i][j]=dp[i-1][j];
        if(find(i)!=i)continue;
        else{
            for(int j=G[i];j<K;j++)dp[i][j]=max(dp[i][j],dp[i-1][j-G[i]]+W[i]);
        }
    }
    cout<<dp[N][K-1];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}