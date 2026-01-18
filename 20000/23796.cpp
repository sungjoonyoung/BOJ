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
ll _map[8][8];
vl s[8];
void rotate(void){//시계방향
    ll tmp[8][8];
    for(int i=0;i<8;i++)for(int j=0;j<8;j++)tmp[j][8-i-1]=_map[i][j];
    for(int i=0;i<8;i++)for(int j=0;j<8;j++)_map[i][j]=tmp[i][j];
}
void solve(void) {
    for(int i=0;i<8;i++)for(int j=0;j<8;j++)cin>>_map[i][j];
    char op;cin>>op;
    if(op=='L')for(int i=0;i<0;i++)rotate();
    if(op=='D')for(int i=0;i<1;i++)rotate();
    if(op=='R')for(int i=0;i<2;i++)rotate();
    if(op=='U')for(int i=0;i<3;i++)rotate();
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(_map[i][j]==0)continue;
            if(s[i].empty())s[i].push_back(_map[i][j]);
            else if(s[i].back()==_map[i][j]){
                s[i].back()+=_map[i][j];
                s[i].push_back(0);
            }
            else if(s[i].back()==0){
                s[i].back()+=_map[i][j];
            }
            else{
                s[i].push_back(_map[i][j]);
            }
        }
    }
    for(int i=0;i<8;i++)for(int j=0;j<8;j++){
        if(j>=s[i].size())_map[i][j]=0;
        else _map[i][j]=s[i][j];
    }
    if(op=='L')for(int i=0;i<4;i++)rotate();
    if(op=='D')for(int i=0;i<3;i++)rotate();
    if(op=='R')for(int i=0;i<2;i++)rotate();
    if(op=='U')for(int i=0;i<1;i++)rotate();
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<_map[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}