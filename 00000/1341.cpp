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
void solve(void) {
    ll a,b;cin>>a>>b;
    if(b>=(1LL<<61)){cout<<"-1";return;}
    ll reala,realb;
    reala=a;
    realb=b;
    int i;
    for(i=1;i<=61;i++){
        if(i==61){cout<<"-1";return;}
        if(((1LL<<i)-1)%b)continue;
        realb=(1LL<<i)-1;
        reala=a*((realb)/b);
        break;
    }
    // cout<<reala<<" "<<realb<<" "; 
    for(i--;i>=0;i--){
        if((1LL<<i)<=reala){
            cout<<"*";
            reala-=(1LL<<i);
        }
        else cout<<"-";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}