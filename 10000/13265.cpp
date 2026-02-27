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
int color[1001];
vi adj[1001];
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=1;i<=N;i++){
        color[i]=0;
        adj[i].clear();
    }
    for(int i=0;i<M;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=N;i++){
        if(color[i])continue;
        queue<pii>q;
        q.push({i,1});
        color[i]=1;
        while(!q.empty()){
            int curx=q.front().first;
            int curw=q.front().second;
            q.pop();
            for(int j=0;j<adj[curx].size();j++){
                int nx=adj[curx][j];
                if(color[nx] and color[curx]==color[nx]){cout<<"impossible\n";return;}
                if(color[nx] and color[curx]!=color[nx])continue;
                q.push({nx,abs(curw-3)});
                color[nx]=abs(curw-3);
            }
        }
    }
    cout<<"possible\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}