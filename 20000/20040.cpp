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
vector<pii> v;
int p[500'001];
int find(int x){
    if(p[x]==x)return x;
    return p[x]=find(p[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    p[py]=px;
}
void solve(void) {
    int N,M;cin>>N>>M;
    v.resize(M);
    for(int i=1;i<=N;i++)p[i]=i;
    for(int i=0;i<M;i++)cin>>v[i].first>>v[i].second;
    for(int i=0;i<M;i++){
        int x=v[i].first;
        int y=v[i].second;
        if(find(x)==find(y)){cout<<i+1;return;}
        uni(x,y);
    }
    cout<<0;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}