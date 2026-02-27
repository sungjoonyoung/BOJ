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
    vector<pii>v;
    for(int i=0;i<N;i++){
        int x,r;cin>>x>>r;
        v.push_back({x-r,x+r});
    }
    sort(all(v));
    vi s;
    for(int i=0;i<N;i++){
        int l=v[i].first;
        int r=v[i].second;
        if(s.empty()){s.push_back(r);continue;}
        while(!s.empty() and s.back()<l)s.pop_back();
        if(!s.empty() and l<=s.back() and s.back()<=r){cout<<"NO\n";return;}
        s.push_back(r);
    }
    cout<<"YES";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}