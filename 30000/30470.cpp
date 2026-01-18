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
    ll N;cin>>N;
    vector<pll>v;
    while(N--){
        ll op,x;cin>>op>>x;
        if(op==1)v.push_back({x,1});
        else{
            if(v.empty())continue;
            ll lim=max(v.back().first-x,0LL);
            ll num=0;
            while(!v.empty() and v.back().first>=lim){
                num+=v.back().second;
                v.pop_back();
            }
            v.push_back({lim,num});
        }
    }
    ll answer=0;
    while(!v.empty()){
        answer+=v.back().first*v.back().second;
        v.pop_back();
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