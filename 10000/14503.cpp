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
int clean[50][50];
int _map[50][50];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void solve(void) {
    int N,M;cin>>N>>M;
    int x,y,d;cin>>x>>y>>d;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];
    int answer=0;
    while(1){
        if(clean[x][y]==0){clean[x][y]=1;answer++;}
        int cnt=0;
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(_map[nx][ny])continue;
            cnt+=!clean[nx][ny];
        }
        //2
        if(!cnt){
            int nx=x+dx[(d+2)%4];
            int ny=y+dy[(d+2)%4];
            if(_map[nx][ny])break;
            x=nx;y=ny;
        }
        else{
            d=(d-1+4)%4;
            int nx=x+dx[d];
            int ny=y+dy[d];
            if(_map[nx][ny])continue;
            if(clean[nx][ny])continue;
            x=nx;y=ny;
        }
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}