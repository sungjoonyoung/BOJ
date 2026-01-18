#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
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
ll mod=1e9+7;
int vst[8];
set<int> bullet;
void solve(void) {
    ll N,M;cin>>N>>M;
    vl A,B;A.resize(N);B.resize(M+1,0);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=1;i<M+1;i++)cin>>B[i];
    for(int i=0;i<N;i++)bullet.insert((7-A[i]%7)%7);
    // for(auto c:bullet)cout<<c<<" ";
    // cout<<"\n";
    for(int i=1;i<B.size();i++){
        if(bullet.find((B[i]+B[i-1])%7)!=bullet.end() and bullet.size()==1){
            B[i]=B[i-1];
            continue;
        }
        B[i]+=B[i-1];
        // B[i]%=mod;
        // cout<<B[i]%7<<" ";
        // cout<<"A\n";
        if(bullet.find((B[i])%7)!=bullet.end())bullet.erase(B[i]%7);
    }
    // for(auto c:bullet)cout<<c<<" ";
    // cout<<"\n";
    vl answer;
    for(int i=0;i<N;i++){
        if(bullet.find((7-A[i]%7)%7)==bullet.end())continue;
        answer.push_back((A[i]+B.back())%mod);
    }
    cout<<answer.size()<<"\n";
    for(auto c:answer)cout<<c<<" ";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}