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
int _map[50][50];
int dmap[50][50];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int N,M;
void dfs1(int x,int y,int d,int v){
    if(_map[x][y]==-1)return;
    int nx=x+dx[d];
    int ny=y+dy[d];
    if(nx<0 or ny<0 or nx>=N or ny>=M){
        d=(d-1+4)%4;
        nx=x+dx[d];
        ny=y+dy[d];
    }
    dfs1(nx,ny,d,_map[x][y]);
    _map[x][y]=v;
}
void dfs2(int x,int y,int d,int v){
    if(_map[x][y]==-1)return;
    int nx=x+dx[d];
    int ny=y+dy[d];
    if(nx<0 or ny<0 or nx>=N or ny>=M){
        d=(d+1+4)%4;
        nx=x+dx[d];
        ny=y+dy[d];
    }
    dfs2(nx,ny,d,_map[x][y]);
    _map[x][y]=v;
}
void solve(void) {
    int T;cin>>N>>M>>T;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];    
    while(T--){
        for(int i=0;i<N;i++)for(int j=0;j<M;j++)dmap[i][j]=0;
        //먼지 확산
        for(int i=0;i<N;i++)for(int j=0;j<M;j++){
            if(_map[i][j]<=0)continue;
            int value=_map[i][j];
            int cnt=0;
            for(int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=M)continue;
                if(_map[nx][ny]==-1)continue;
                cnt++;
                dmap[nx][ny]+=value/5;
            }
            _map[i][j]=value-value/5*cnt;
        }
        //먼지 d 대입
        for(int i=0;i<N;i++)for(int j=0;j<M;j++)_map[i][j]+=dmap[i][j];
        // for(int i=0;i<N;i++){
        //     for(int j=0;j<M;j++)cout<<_map[i][j]<<" ";
        //     cout<<"\n";
        // }
        // 공기 청정기 기릿
        for(int i=0;i<N;i++){
            if(_map[i][0]==-1){
                dfs1(i,1,1,0);
                dfs2(i+1,1,1,0);
                break;
            }
        }
        // for(int i=0;i<N;i++){
        //     for(int j=0;j<M;j++)cout<<_map[i][j]<<" ";
        //     cout<<"\n";
        // }
    }
    ll answer=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)answer+=_map[i][j];
    cout<<answer+2;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}