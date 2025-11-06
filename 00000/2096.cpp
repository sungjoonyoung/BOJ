#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
pii dp[2][3]; //min max
int dx[3]={-1,0,1};
void solve(void){
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=0;j<3;j++){
            cin>>dp[1][j].first;
            dp[1][j].second=dp[1][j].first;
        }

        for(int j=0;j<3;j++){
            int minnum=10*100'000;int maxnum=-1;
            for(int h=0;h<3;h++){
                int nx=j+dx[h];
                if(nx<0 or nx==3)continue;
                minnum=min(minnum,dp[0][nx].first);
                maxnum=max(maxnum,dp[0][nx].second);
            }
            dp[1][j].first+=minnum;
            dp[1][j].second+=maxnum;
        }

        for(int j=0;j<3;j++) dp[0][j]=dp[1][j];
    }
    cout<<max({dp[1][0].second,dp[1][1].second,dp[1][2].second});
    cout<<" ";
    cout<<min({dp[1][0].first,dp[1][1].first,dp[1][2].first});
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}