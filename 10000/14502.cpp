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
int _map[8][8];
int vst[8][8];
vector<pii> v;
int N,M;
int func(int a,int b,int c){
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)vst[i][j]=0;
    _map[v[a].first][v[a].second]=1;
    _map[v[b].first][v[b].second]=1;
    _map[v[c].first][v[c].second]=1;
    queue<pii> q;
    int virus=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)if(_map[i][j]==2){
        q.push({i,j});
        virus++;
        vst[i][j]=1;
    }
    while(!q.empty()){
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=curx+"1120"[i]-'1';
            int ny=cury+"2011"[i]-'1';
            if(nx<0 or nx>=N or ny<0 or ny>=M)continue;
            if(_map[nx][ny])continue;
            if(vst[nx][ny])continue;
            q.push({nx,ny});
            virus++;
            vst[nx][ny]=1;
        }
    }
    _map[v[a].first][v[a].second]=0;
    _map[v[b].first][v[b].second]=0;
    _map[v[c].first][v[c].second]=0;
    // cout<<virus<<"\n";
    return virus;
}
void solve(void) {
    cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];
    // cout<<(64*64*64*64);//16'777'216
    int possible=M*N;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        if(_map[i][j]){
            if(_map[i][j]==1)possible--;
            continue;
        }
        v.push_back({i,j});
    }
    // cout<<v.size()<<" "<<possible<<"\n";
    int maxnum=0;
    for(int i=0;i<v.size();i++)
        for(int j=i+1;j<v.size();j++)
            for(int z=j+1;z<v.size();z++)//벽들
                maxnum=max(maxnum,possible-func(i,j,z)-3);
    cout<<maxnum;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)solve();
}