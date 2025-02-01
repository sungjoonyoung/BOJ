#include<iostream>
using namespace std;
int N,M;
long long arr[2][50][50];
void mul(int x,int y){
    long long tmp[50][50];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        tmp[i][j]=0;
    }
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        for(int k=0;k<N;k++){
        tmp[i][j]+=arr[x][i][k]*arr[y][k][j];
        tmp[i][j]%=1000000007;
        }
    }
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        arr[x][i][j]=tmp[i][j];
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;
    for(int i=0;i<N;i++)arr[0][i][i]=1;
    while(M--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        arr[1][a][b]=arr[1][b][a]=1;
    }
    int R;
    cin>>R;
    while(R){
        if(R%2)mul(0,1);
        mul(1,1);
        R/=2;
    }
    cout<<arr[0][0][0];
}