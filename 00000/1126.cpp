#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dp[51][500'001];
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    v.resize(N);
    dp[0][0]=1;
    for(int i=0;i<N;i++){
        int x;cin>>x;
        for(int j=0;j<=500'000;j++){
            if(!dp[i][j])continue;
            if(j+x<=500'000)dp[i+1][j+x]=max(dp[i+1][j+x],dp[i][j]+x);
            if(j<x)dp[i+1][x-j]=max(dp[i+1][x-j],dp[i][j]+(x-j));
            if(j>=x)dp[i+1][j-x]=max(dp[i+1][j-x],dp[i][j]);
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
        }
    }
    if(dp[N][0]==1)cout<<"-1";
    else cout<<dp[N][0]-1;
}