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
int arr[100][100];
int del[100][100];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue<pii> q;
int vistied[100][100];
void solve(void){
    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>arr[i][j];
    int answer=1;
    while(1){
        bool is_done=1;
        //dfs
        q.push({0,0});
        vistied[0][0]=answer;
        while(!q.empty()){
            int curx=q.front().first;
            int cury=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=curx+dx[i];
                int ny=cury+dy[i];
                if(nx<0 or nx>=N or ny<0 or ny>=M)continue;
                if(vistied[nx][ny]==answer)continue;
                if(arr[nx][ny]){del[nx][ny]++;continue;}
                q.push({nx,ny});
                vistied[nx][ny]=answer;
            }
        }
        //
        for(int i=1;i<N-1;i++){
            for(int j=1;j<M-1;j++){
                if(del[i][j]>=2){arr[i][j]=0;is_done=0;}
                del[i][j]=0;
            }
        }
        if(is_done)break;
        answer++;
    }
    cout<<answer-1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}