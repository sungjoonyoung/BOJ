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
int dp[31][31];
void solve(void) {
    int N,K;cin>>N>>K;
    for(int i=0;i<=N;i++)for(int j=0;j<=i;j++){
        if(j==0 or i==j)dp[i][j]=1;
        else dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
    }
    cout<<dp[N-1][K-1];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)solve();
}