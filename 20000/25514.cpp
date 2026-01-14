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
int _map[5][5];
int vst[5][5];
queue<pair<pii,int>>q;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void solve(void) {
    // cout<<(25)*(25)*(25)*(25)*(25)*(25)<<"\n";
    for(int i=0;i<5;i++)for(int j=0;j<5;j++)cin>>_map[i][j];
    pii cur;cin>>cur.first>>cur.second;
    ll answer=0;
    for(int t=1;t<=6;t++){
        for(int i=0;i<5;i++)for(int j=0;j<5;j++)vst[i][j]=0;
        while(!q.empty())q.pop();
        q.push({cur,0});
        vst[cur.first][cur.second]=1;
        while(!q.empty()){
            int curx=q.front().first.first;
            int cury=q.front().first.second;
            int curw=q.front().second;
            if(_map[curx][cury]==t){
                answer+=curw;
                cur=make_pair(curx,cury);
                break;
            }
            q.pop();
            //한 칸
            for(int i=0;i<4;i++){
                int nx=curx+dx[i];
                int ny=cury+dy[i];
                if(nx<0 or ny<0 or nx>=5 or ny>=5)continue;
                if(vst[nx][ny])continue;
                if(_map[nx][ny]==-1)continue;
                q.push({{nx,ny},curw+1});
                vst[nx][ny]=1;
            }
            //무한
            for(int i=0;i<4;i++){
                int nx=curx;
                int ny=cury;
                do{
                    nx+=dx[i];
                    ny+=dy[i];
                    if(nx<0 or ny<0 or nx>=5 or ny>=5)break;
                    if(_map[nx][ny]==-1)break;
                    if(_map[nx][ny]==7){
                        nx+=dx[i];
                        ny+=dy[i];
                        break;
                    }
                }while(1);
                nx-=dx[i];
                ny-=dy[i];
                if(vst[nx][ny])continue;
                q.push({{nx,ny},curw+1});
                vst[nx][ny]=1;
            }
        }
        if(q.empty()){cout<<"-1";return;}
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