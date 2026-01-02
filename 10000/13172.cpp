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
ll MOD = 1'000'000'007;
ll powf(ll x,ll e){
    ll tmp=x;
    ll answer=1;
    while(e){
        if(e%2)answer*=tmp;
        e/=2;
        tmp*=tmp;
        
        answer%=MOD;
        tmp%=MOD;
    }
    return answer;
}
void solve(void) {
    int N;cin>>N;
    ll answer=0;
    while(N--){
        ll M,S;cin>>M>>S;
        // s*m^-1
        ll tmp=S*powf(M,MOD-2)%MOD;
        // cout<<tmp<<"\n";
        answer+=tmp;
        answer%=MOD;
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)solve();
}