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
char _map[1000][1000];
int P[2000001];
int find(int x){
    if(P[x]==x)return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    P[py]=px;
}
int dfs(int x,int y){
    if(_map[x][y]==0)return x*1000+y;
    int nx=x;int ny=y;
    if(_map[x][y]=='U')nx--;
    if(_map[x][y]=='D')nx++;
    if(_map[x][y]=='L')ny--;
    if(_map[x][y]=='R')ny++;
    _map[x][y]=0;
    uni(x*1000+y,dfs(nx,ny));
    return x*1000+y;
}
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];
    for(int i=0;i<2000001;i++)P[i]=i;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        if(_map[i][j]==0)continue;
        dfs(i,j);
    }
    int answer=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        int coor=i*1000+j;
        if(coor==find(coor))answer++;
    }
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<M;j++)cout<<find(i*1000+j)/1000<<","<<find(i*1000+j)%1000<<" ";
    //     // for(int j=0;j<M;j++)cout<<_map[i][j];
    //     cout<<"\n";
    // }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}