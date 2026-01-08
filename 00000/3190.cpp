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
int _map[100][100];
int apple[100][100];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void solve(void) {
    int N;cin>>N;
    int K;cin>>K;
    for(int i=0;i<K;i++){
        int x,y;cin>>x>>y;
        apple[x-1][y-1]=1;
    }
    int M;cin>>M;
    vector<pair<int,char>>v;v.resize(M);
    for(int i=0;i<M;i++)cin>>v[i].first>>v[i].second;
    v.push_back({100'000,'D'});
    for(int i=v.size()-1;i>0;i--)v[i].first-=v[i-1].first;
    int hx,hy;
    queue<pii>q;
    int time=0;
    
    hx=hy=0;
    q.push({0,0});
    _map[0][0]=1;
    int d=1;
    for(int i=0;i<v.size();i++){
        int num=v[i].first;
        char op=v[i].second;
        while(num--){
            time++;
            int nx=hx+dx[d];
            int ny=hy+dy[d];
            if(nx<0 or ny<0 or nx>=N or ny>=N){cout<<time;return;}
            if(_map[nx][ny]){cout<<time;return;}
            //
            q.push({nx,ny});
            hx=nx;hy=ny;
            _map[nx][ny]=1;
            if(apple[nx][ny]){
                apple[nx][ny]=0;
            }
            else{
                _map[q.front().first][q.front().second]=0;
                q.pop();
            }
        }
        if(op=='L')d=(d-1+4)%4;
        else d=(d+1)%4;
    }
    // cout<<time;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}