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
queue<pii> q;
vector<pii>adj[900];
int arr[900];
int N,E;
int di(int s,int e){
    for(int i=1;i<=N;i++)arr[i]=200'000*1'001;
    arr[s]=0;
    q.push({s,0});
    while(!q.empty()){
        int curx=q.front().first;
        int curw=q.front().second;
        q.pop();
        if(arr[curx]>curw)continue;
        for(int i=0;i<adj[curx].size();i++){
            int nx=adj[curx][i].first;
            int dw=adj[curx][i].second;
            int w=curw+dw;
            if(arr[nx]<=w)continue;
            arr[nx]=w;
            q.push({nx,w});
        }
    }
    return arr[e];
}
void solve(void){
    cin>>N>>E;
    for(int i=0;i<E;i++){
        int s,e,w;cin>>s>>e>>w;
        adj[s].push_back({e,w});
        adj[e].push_back({s,w});
    }
    int A,B;cin>>A>>B;
    int first=di(1,A)+di(A,B)+di(B,N);
    int second=di(1,B)+di(B,A)+di(A,N);
    // cout<<"A";
    if(min(first,second)>200'000*1'000)cout<<"-1";
    else cout<<min(first,second);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}