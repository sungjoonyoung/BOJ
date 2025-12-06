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
char arr[20][20];
bool visited['z'-'a'+1];
int N,M,maxnum;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int dfs(int x,int y,int step){
    int tmp=step;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 or nx>=N or ny<0 or ny>=M)continue;
        if(visited[arr[nx][ny]-'A'])continue;
        visited[arr[nx][ny]-'A']=1;
        tmp=max(tmp,dfs(nx,ny,step+1));
        visited[arr[nx][ny]-'A']=0;
    }
    return tmp;
}
void solve(void){
    cin>>N>>M;maxnum=-1;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>arr[i][j];
    visited[arr[0][0]-'A']=1;
    cout<<dfs(0,0,0)+1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}