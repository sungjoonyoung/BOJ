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
bool _map[5000][5000];
void dfs(int x, int y, int l){
    if(l==3){
        for(int i=x;i<x+l;i++)
            for(int j=y;j<y+l;j++){
                if(i==x+1 and j==y+1)continue;
                _map[i][j]=1;
            }
        return;
    }
    l/=3;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            if(i==1 and j==1)continue;
            dfs(x+i*l,y+j*l,l);
        }
}
void solve(void){
    int N;cin>>N;
    dfs(0,0,N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(_map[i][j])cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}