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
int N,M;
int visited[500][500];
int arr[500][500];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int answer=0;
void dfs(int step, int sum, int x, int y){
    if(step==3){
        answer=max(answer,sum+arr[x][y]);
        return;
    }
    visited[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 or nx>=N or ny<0 or ny>=M)continue;
        if(visited[nx][ny])continue;
        visited[nx][ny]=1;
        dfs(step+1,sum+arr[x][y],nx,ny);
        visited[nx][ny]=0;
    }
    visited[x][y]=0;
}
void solve(void){
    cin>>N>>M;
    //
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>arr[i][j];
    //dfs
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            dfs(0,0,i,j);
    //박유 모양
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        for(int e=0;e<4;e++){
            int tmp=arr[i][j];
            for(int d=0;d<4;d++){
                if(d==e)continue;
                int nx=i+dx[d];
                int ny=j+dy[d];
                if(nx<0 or nx>=N or ny<0 or ny>=M)break;
                tmp+=arr[nx][ny];
            }
            answer=max(answer,tmp);
        }
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}