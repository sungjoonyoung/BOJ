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
ll dp[61];
ll suf[61];
void solve(void) {
    ll A,B;cin>>A>>B;
    dp[0]=1;
    for(int i=1;i<=61;i++){
        for(int j=0;j<i;j++)dp[i]+=dp[j];
        dp[i]+=(1LL<<i);
    }
    // for(auto c:dp)cout<<c<<"\n";
    suf[0]=dp[0];
    for(int i=1;i<=61;i++){
        suf[i]+=suf[i-1]+dp[i];
    }
    // for(auto c:suf)cout<<c<<"\n";
    ll Bsum=(B%2);
    while(B){
        ll ind=61;
        while(ind and !((1LL<<ind)&B))ind--;
        if(ind==0)break;
        if(ind)Bsum+=suf[ind-1];
        Bsum+=(B^(1LL<<ind))+1;
        B^=(1LL<<ind);
    }
    // cout<<Bsum<<"\n";

    A--;
    ll Asum=(A%2);
    while(A){
        ll ind=61;
        while(ind and !((1LL<<ind)&A))ind--;
        if(ind==0)break;
        if(ind)Asum+=suf[ind-1];
        Asum+=(A^(1LL<<ind))+1;
        A^=(1LL<<ind);
    }
    // cout<<Asum<<"\n";
    cout<<Bsum-Asum;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}