#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int dp[5][10000];
// b o bb  o bb
// b o  o bb bb
int arr[2][10000];
void solve(void){
    int N,W;
    cin>>N>>W;
    for(int i=0;i<2;i++)for(int j=0;j<N;j++)cin>>arr[i][j];
    int minnum=1000001;

    if(N==1){
        if(arr[0][0]+arr[1][0]<=W)cout<<"1\n";
        else cout<<"2\n";
        return;
    }

    for(int op=0;op<5;op++){
        if(op==2 and arr[0][0]+arr[0][N-1]<=W){
            dp[0][0]=50000;
            dp[1][0]=50000;
            dp[2][0]=2;
            dp[3][0]=50000;
            dp[4][0]=50000;
        }
        else if(op==3 and arr[1][0]+arr[1][N-1]<=W){
            dp[0][0]=50000;
            dp[1][0]=50000;
            dp[2][0]=50000;
            dp[3][0]=2;
            dp[4][0]=50000;
        }
        else if(op==4 and arr[1][0]+arr[1][N-1]<=W and arr[0][0]+arr[0][N-1]<=W){
            dp[0][0]=50000;
            dp[1][0]=50000;
            dp[2][0]=50000;
            dp[3][0]=50000;
            dp[4][0]=2;
        }
        else if(op==0 and arr[1][0]+arr[0][0]<=W){
            dp[0][0]=1;
            dp[1][0]=50000;
            dp[2][0]=50000;
            dp[3][0]=50000;
            dp[4][0]=50000;
        }
        else{
            dp[0][0]=50000;
            dp[1][0]=2;
            dp[2][0]=50000;
            dp[3][0]=50000;
            dp[4][0]=50000;
        }
        
        for(int i=1;i<N;i++){
            for(int j=0;j<5;j++)dp[j][i]=50000;
            //0
            if(arr[1][i]+arr[0][i]<=W)for(int j=0;j<5;j++)dp[0][i]=min(dp[0][i], dp[j][i-1]+1);
            //1
            for(int j=0;j<5;j++)dp[1][i]=min(dp[1][i], dp[j][i-1]+2);
            //2
            if(arr[0][i]+arr[0][i-1]<=W)dp[2][i]=min(dp[1][i-1]+1,dp[3][i-1]+1);
            //3
            if(arr[1][i]+arr[1][i-1]<=W)dp[3][i]=min(dp[1][i-1]+1,dp[2][i-1]+1);
            //4
            if(arr[0][i]+arr[0][i-1]<=W and arr[1][i]+arr[1][i-1]<=W)dp[4][i]=dp[1][i-1];
        }

        if(op==2 and arr[0][0]+arr[0][N-1]<=W){
            minnum=min({minnum,dp[1][N-1]-1,dp[3][N-1]-1});
        }
        else if(op==3 and arr[1][0]+arr[1][N-1]<=W){
            minnum=min({minnum,dp[1][N-1]-1,dp[2][N-1]-1});
        }
        else if(op==4 and arr[1][0]+arr[1][N-1]<=W and arr[0][0]+arr[0][N-1]<=W){
            for(int i=0;i<5;i++)minnum=min(minnum,dp[i][N-2]);
        }
        else{
            for(int i=0;i<5;i++)minnum=min(minnum,dp[i][N-1]);
        }
        // for(int i=0;i<5;i++){
        //     for(int j=0;j<N;j++)cout<<dp[i][j]<<" ";
        //     cout<<"\n";
        // }
        // cout<<"\n";
    }
    cout<<minnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}