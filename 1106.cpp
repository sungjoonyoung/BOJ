#include<iostream>
#define MAX 1500
using namespace std;
int dp[MAX];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int C,N;
    cin>>C>>N;
    for(int i=0;i<MAX;i++)dp[i]=2'000'000'000;
    dp[0]=0;

    for(int h=1;h<=N;h++){
        int cost,man;
        cin>>cost>>man;
        for(int i=man;i<MAX;i++) dp[i]=min(dp[i],dp[i-man]+cost);
    }

    int minnum=2'000'000'000;
    for(int i=C;i<MAX;i++) minnum=min(minnum,dp[i]);
    cout<<minnum;
}