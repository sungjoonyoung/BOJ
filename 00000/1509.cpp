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
int dp[2600];
vi adj[2600];
void solve(void) {
    string str;cin>>str;
    for(int i=0;i<str.size();i++)dp[i]=5'000;
    //odd
    for(int i=0;i<str.size();i++){
        for(int j=0;i-j>=0 and i+j<str.size();j++){
            if(str[i-j]!=str[i+j])break;
            adj[i+j].push_back(i-j);
        }
    }
    //even
    for(int i=0;i<str.size();i++){
        for(int j=1;i-j+1>=0 and i+j<str.size();j++){
            if(str[i-j+1]!=str[i+j])break;
            adj[i+j].push_back(i-j+1);
        }
    }
    //
    for(int i=0;i<str.size();i++){
        for(int j=0;j<adj[i].size();j++){
            int ind=adj[i][j];
            if(ind==0)dp[i]=min(dp[i],1);
            else dp[i]=min(dp[i],dp[ind-1]+1);
        }
    }
    // for(auto c:adj[str.size()-1])cout<<c<<" ";
    cout<<dp[str.size()-1];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}