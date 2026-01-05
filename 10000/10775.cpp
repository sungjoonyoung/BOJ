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
int Parent[100'001];
int find(int x){
    if(x==Parent[x])return x;
    return Parent[x]=find(Parent[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    Parent[max(px,py)]=min(px,py);
}
void solve(void) {
    int G,P;cin>>G>>P;
    vi v;v.resize(P);
    for(int i=0;i<P;i++)cin>>v[i];
    for(int i=1;i<=G;i++)Parent[i]=i;
    for(int i=0;i<P;i++){
        int g=v[i];
        if(find(g)==0){cout<<i;return;}
        uni(g,find(g)-1);
    }
    cout<<P;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}