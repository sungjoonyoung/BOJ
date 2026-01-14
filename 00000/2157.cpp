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
vector<pii> adj[301];
int dp[301][301];
void solve(void) {
    int N,M,K;cin>>N>>M>>K;
    M--;
    for(int i=0;i<K;i++){
        int from,to,w;cin>>from>>to>>w;
        if(from>to)continue;
        adj[to].push_back({from,w});
    }
    for(int j=0;j<=M;j++)dp[1][j]=1;
    
    for(int i=1;i<=N;i++){
        // for(int j=0;j<=M;j++)dp[i][j]=dp[i-1][j];
        for(int j=0;j<adj[i].size();j++){
            int from=adj[i][j].first;
            int w=adj[i][j].second;
            for(int k=1;k<=M;k++){
                if(dp[from][k-1]==0)continue;
                dp[i][k]=max(dp[i][k],dp[from][k-1]+w);
            }
        }
    }
    cout<<dp[N][M]-1;
    // cout<<300*300*300;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}