#include<iostream>
#include<vector>
using namespace std;
long long dp[2][1005][1000]; // u many i
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K;
    cin>>N>>K;
    long long answer=0;
    for(int op=0;op<2;op++){
        for(int i=0;i<2;i++)for(int j=0;j<1005;j++)for(int k=0;k<1000;k++)dp[i][j][k]=0;
        dp[op][op][0]=1;
        for(int i=1;i<N;i++){
            for(int j=0;j<=N;j++){
                dp[0][j][i]+=dp[0][j][i-1];
                dp[0][j][i]%=1'000'000'003;
                dp[0][j][i]+=dp[1][j][i-1];
                dp[0][j][i]%=1'000'000'003;

                dp[1][j+1][i]+=dp[0][j][i-1];
                dp[1][j+1][i]%=1'000'000'003;
            }
        }
        if(op)answer+=dp[0][K][N-1];
        else{
            answer+=dp[1][K][N-1];
            answer%=1'000'000'003;
            answer+=dp[0][K][N-1];
            answer%=1'000'000'003;
        }
        answer%=1'000'000'003;
        
    }
    cout<<answer;
}