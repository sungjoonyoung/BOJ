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
ll MOD=10'007;
ll dp[60][60];
void solve(void) {
    int N;cin>>N;
    for(int i=0;i<60;i++)for(int j=0;j<60;j++){
        if(i==j or j==0)dp[i][j]=1;
        else dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        dp[i][j]%=MOD;
    }
    ll answer=0;
    for(int i=1;;i++){
        if(i*4>N)break;
        answer+=(dp[13][i]*dp[52-i*4][N-i*4]%MOD)*pow(-1,i+1);
        answer+=MOD*2;
        answer%=MOD;
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