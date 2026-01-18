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
    int N;cin>>N;
    int M;cin>>M;
    vector<pii>v;v.resize(M);
    for(int i=0;i<M;i++)cin>>v[i].first>>v[i].second;
    v.push_back({1'000'005,1'000'005});
    sort(all(v));
    int l,r;
    l=v[0].first;
    r=v[0].second;
    for(int i=1;i<v.size();i++){
        if(r<v[i].first){
            // cout<<l<<" "<<r<<"\n";
            N-=r-l;
            l=v[i].first;
            r=v[i].second;
        }
        else{
            r=max(r,v[i].second);
        }
    }
    cout<<N;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}