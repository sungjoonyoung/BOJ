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
int N;int S,E;
vi adj[100'001];
int dfs(int x,int b,int step){
    if(x==E)return 1;
    if(step%2 and adj[x].size()>2)return 0;
    for(int i=0;i<adj[x].size();i++){
        if(adj[x][i]==b)continue;
        int op=dfs(adj[x][i],x,step+1);
        if(op==1)return 1;
    }
    return 0;
}
void solve(void) {
    cin>>N;
    cin>>S>>E;
    for(int i=0;i<N-1;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(dfs(S,-1,0)==1)cout<<"First";
    else cout<<"Second";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}