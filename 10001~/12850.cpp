#include<iostream>
using namespace std;
long long arr[2][8][8];
void mul(int x,int y){
    long long tmp[8][8];
    for(int i=0;i<8;i++)for(int j=0;j<8;j++){
        tmp[i][j]=0;
    }
    for(int i=0;i<8;i++)for(int j=0;j<8;j++){
        for(int k=0;k<8;k++){
        tmp[i][j]+=arr[x][i][k]*arr[y][k][j];
        tmp[i][j]%=1000000007;
        }
    }
    for(int i=0;i<8;i++)for(int j=0;j<8;j++){
        arr[x][i][j]=tmp[i][j];
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<8;i++)arr[0][i][i]=1;
    arr[1][0][1]=arr[1][0][2]=1;
    arr[1][1][0]=arr[1][1][2]=arr[1][1][3]=1;
    arr[1][2][0]=arr[1][2][1]=arr[1][2][3]=arr[1][2][4]=1;
    arr[1][3][1]=arr[1][3][2]=arr[1][3][4]=arr[1][3][5]=1;
    arr[1][4][2]=arr[1][4][3]=arr[1][4][5]=arr[1][4][6]=1;
    arr[1][5][3]=arr[1][5][4]=arr[1][5][7]=1;
    arr[1][6][4]=arr[1][6][7]=1;
    arr[1][7][5]=arr[1][7][6]=1;
    while(N){
        if(N%2)mul(0,1);
        mul(1,1);
        N/=2;
    }
    cout<<arr[0][0][0];
}