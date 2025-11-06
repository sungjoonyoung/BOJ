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
int visited[16][16];
int answer=0;int N;
int dx[2]={0,1};
int dy[2]={1,0};
int dix[1]={1};
int diy[1]={1};
void dfs(int x,int y,int op){
    if(x==N-1 and y==N-1){
        answer++;return;
    }
    //wasd
    for(int i=0;i<2;i++){
        if(op<2 and i!=op)continue;
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
        if(visited[nx][ny])continue;
        visited[nx][ny]=1;
        dfs(nx,ny,i);
        visited[nx][ny]=0;
    }
    //diagonal
    for(int i=0;i<1;i++){
        int nx=x+dix[i];
        int ny=y+diy[i];
        if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
        if(visited[nx][ny])continue;
        if(visited[nx][y] or visited[x][ny])continue;
        visited[nx][ny]=1;
        visited[nx][y]=visited[x][ny]=1;
        dfs(nx,ny,2+i);
        visited[nx][ny]=0;
        visited[nx][y]=visited[x][ny]=0;
    }
}
void solve(void){
    cin>>N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)cin>>visited[i][j];
    visited[0][0]=visited[0][1]=1;
    dfs(0,1,0);
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}