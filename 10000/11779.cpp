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
vector<pii> adj[1'001];
priority_queue<pii,vector<pii>,greater<>> pq;
int dist[1'001];
int back[1'001];
void dfs(int x,int n){
    if(back[x]==-1){
        cout<<n<<"\n";
        cout<<x<<" ";
        return;
    }
    dfs(back[x],n+1);
    cout<<x<<" ";
}
void solve(void){
    int N,M;cin>>N>>M;
    for(int i=1;i<=N;i++)dist[i]=1'000'000'000;
    for(int i=0;i<M;i++){
        int s,e,w;cin>>s>>e>>w;
        adj[s].push_back({e,w});
    }
    int s,e;cin>>s>>e;
    pq.push({0,s});
    dist[s]=0;
    back[s]=-1;
    while(!pq.empty()){
        int w=pq.top().first;
        int x=pq.top().second;
        pq.pop();
        if(x==e)break;
        //
        for(int i=0;i<adj[x].size();i++){
            int nx=adj[x][i].first;
            int dw=adj[x][i].second;
            if(w+dw>=dist[nx])continue;
            dist[nx]=w+dw;
            back[nx]=x;
            pq.push({w+dw,nx});
        }
    }
    cout<<dist[e]<<"\n";
    dfs(e,1);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}