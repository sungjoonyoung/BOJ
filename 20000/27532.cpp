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
int mod=60*12;
int vst[1000];
int in_func(void){
    char h0,h1,m0,m1;
    cin>>h0>>h1>>m0>>m0>>m1;
    h0-='0';
    h1-='0';
    m0-='0';
    m1-='0';
    int out=h0*10*60+h1*60+m0*10+m1;
    out%=mod;
    return out;
}
void solve(void) {
    int M;cin>>M;
    vi v;v.resize(M);
    for(int i=0;i<M;i++)v[i]=in_func();
    // cout<<mod<<"\n";
    int answer=2'000'000'000;
    for(int d=1;d<=mod;d++){
        for(int i=0;i<1000;i++)vst[i]=0;
        int tmp=0;
        for(int i=0;i<M;i++){
            int cur=v[i];
            if(vst[(cur+mod*3000-d*i)%mod])continue;
            // if(d==10)cout<<i<<" ";
            vst[(cur+mod*3000-d*i)%mod]=1;
            tmp++;
        }
        answer=min(answer,tmp);
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