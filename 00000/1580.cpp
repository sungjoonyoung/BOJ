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
queue<pair<pii,pii>> q;
char _map[20][20];
int dx[9]={1,1,1,-1,-1,-1,0,0,0};
int dy[9]={-1,1,0,-1,1,0,-1,1,0};
int visited[20][20][20][20];
void solve(void){
    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];
    //Afirst
    int curAx;
    int curAy;
    int curBx;
    int curBy;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        if(_map[i][j]=='A'){
            curAx=i;
            curAy=j;
        }
        if(_map[i][j]=='B'){
            curBx=i;
            curBy=j;
        }
    }
    // cout<<curBy;
    q.push({{curAx,curAy},{curBx,curBy}});
    visited[curAx][curAy][curBx][curBy]=1;
    while(!q.empty()){
        // cout<<"A";
        curAx=q.front().first.first;
        curAy=q.front().first.second;
        curBx=q.front().second.first;
        curBy=q.front().second.second;
        q.pop();
        for(int i=0;i<9;i++)for(int j=0;j<9;j++){
            int nAx=curAx+dx[i];
            int nAy=curAy+dy[i];
            int nBx=curBx+dx[j];
            int nBy=curBy+dy[j];
            if(nAx<0 or nAy<0 or nAx>=N or nAy>=M)continue;
            if(nBx<0 or nBy<0 or nBx>=N or nBy>=M)continue;
            if(nAx==nBx and nAy==nBy)continue;
            if(nAx==curBx and nAy==curBy and curAx==nBx and curAy==nBy)continue;
            if(_map[nAx][nAy]=='X')continue;
            if(_map[nBx][nBy]=='X')continue;
            if(visited[nAx][nAy][nBx][nBy])continue;
            q.push({{nAx,nAy},{nBx,nBy}});
            visited[nAx][nAy][nBx][nBy]=visited[curAx][curAy][curBx][curBy]+1;
            if(_map[nAx][nAy]=='B' and _map[nBx][nBy]=='A'){cout<<visited[curAx][curAy][curBx][curBy];return;}
        }
    }
    cout<<"-1";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}