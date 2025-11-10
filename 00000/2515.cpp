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
ll dp[2][300'001];
vector<pii> v;
void solve(void){
    int N;cin>>N;int S;cin>>S;
    v.resize(N+1);
    v[0]={-1000000,-1000000};
    for(int i=1;i<=N;i++)cin>>v[i].first>>v[i].second;
    sort(all(v));
    for(int i=1;i<=N;i++){
        // 안 가져 갔을 때
        dp[1][i]=dp[0][i]=max(dp[1][i-1],dp[0][i-1]);
        // 가져 갔을 때
        
        int ind=upper_bound(v.begin(),v.end(),make_pair(v[i].first-S,1'000'000'000))-v.begin()-1;
        // cout<<ind<<"\n";
        if(ind<i)dp[1][i]=max(dp[1][ind],dp[0][ind])+v[i].second;
    }
    ll maxnum=-1;
    for(int i=1;i<=N;i++)maxnum=max(maxnum,max(dp[1][i],dp[0][i]));
    cout<<maxnum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}