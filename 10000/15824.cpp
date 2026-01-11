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
ll mod=1'000'000'007;
ll ex(ll x,ll e){
    ll tmp=x;
    ll answer=1;
    while(e){
        if(e%2)answer*=tmp;
        tmp*=tmp;
        e/=2;
        tmp%=mod;
        answer%=mod;
    }
    return answer;
}
void solve(void) {
    int N;cin>>N;
    vl v;v.resize(N); 
    for(int i=0;i<N;i++)cin>>v[i];
    sort(all(v));
    // cout<<(1LL<<31-1)<<"\n";
    ll answer=0;
    for(int i=0;i<N;i++){
        answer+=(v[i]*ex(2,i))%mod;
        answer%=mod;
    }
    for(int i=0;i<N;i++){
        answer-=(v[i]*ex(2,N-i-1))%mod-mod;
        answer%=mod;
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