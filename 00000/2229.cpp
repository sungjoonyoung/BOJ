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
ll dp[1001];
void solve(void) {
    int N;cin>>N;
    vl v;v.resize(N+1);
    for(int i=1;i<=N;i++)cin>>v[i];
    for(int e=1;e<=N;e++){
        ll maxnum=v[e];
        ll minnum=v[e];
        for(int s=e;s>=1;s--){
            maxnum=max(maxnum,v[s]);
            minnum=min(minnum,v[s]);
            dp[e]=max(dp[e],maxnum-minnum+dp[s-1]);
        }
    }
    cout<<dp[N];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}