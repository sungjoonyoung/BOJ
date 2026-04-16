#include<iostream>
using namespace std;
int dp[51][51][1001]; // {1or0}(N,다발,S)
void solve(void) {
    int N,S;cin>>N>>S;
    dp[3][1][1]=1;
    dp[3][2][1]=1;
    for(int i=3;i<51;i++)for(int d=0;d<51;d++)for(int j=0;j<1001;j++){
        if(dp[i][d][j]==0)continue;
        if(!(i+1<51 and d+1<51 and j+d<1001))continue;
        dp[i+1][d+1][j+d]=1;
        dp[i+1][1][j+d]=1;
    }
    int answer=0;
    for(int i=0;i<51;i++)answer|=dp[N][i][S];
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}