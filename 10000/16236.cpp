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
int _map[20][20];
int vst[20][20];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void solve(void) {
    int N;cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>_map[i][j];
    int shark_x,shark_y,shark_w=2;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)if(_map[i][j]==9){_map[i][j]=0;shark_x=i;shark_y=j;}
    ll answer=0;
    int eating=0;
    while(1){
        for(int i=0;i<N;i++)for(int j=0;j<N;j++)vst[i][j]=0;
        queue<pair<int,pii>> q;
        q.push({0,{shark_x,shark_y}});
        vst[shark_x][shark_y]=2;
        int eat_step=500;
        int eat_x=100;
        int eat_y=100;
        while(!q.empty()){
            int curx=q.front().second.first;
            int cury=q.front().second.second;
            int step=q.front().first;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=curx+dx[i];
                int ny=cury+dy[i];
                if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
                if(shark_w<_map[nx][ny])continue;
                if(vst[nx][ny])continue;
                if(_map[nx][ny]>0 and shark_w>_map[nx][ny]){
                    if(step+1>eat_step)break;
                    eat_step=step+1;
                    if(nx<eat_x){eat_x=nx;eat_y=ny;}
                    else if(nx==eat_x and ny<eat_y){eat_x=nx;eat_y=ny;}
                    continue;
                }
                q.push({step+1,{nx,ny}});
                vst[nx][ny]=1;
            }
        }
        if(eat_step==500)break;
        answer+=eat_step;
        shark_x=eat_x;
        shark_y=eat_y;
        _map[eat_x][eat_y]=0;
        eating++;
        if(eating==shark_w){eating=0;shark_w++;}
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