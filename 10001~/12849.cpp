#include<iostream>
using namespace std;
long long arr[100001][8];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    arr[0][0]=1;
    for(int i=1;i<=N;i++){
        arr[i][0]=arr[i-1][1]+arr[i-1][2];
        arr[i][1]=arr[i-1][0]+arr[i-1][2]+arr[i-1][3];
        arr[i][2]=arr[i-1][0]+arr[i-1][1]+arr[i-1][3]+arr[i-1][4];
        arr[i][3]=arr[i-1][1]+arr[i-1][2]+arr[i-1][4]+arr[i-1][5];
        arr[i][4]=arr[i-1][2]+arr[i-1][3]+arr[i-1][5]+arr[i-1][6];
        arr[i][5]=arr[i-1][3]+arr[i-1][4]+arr[i-1][7];
        arr[i][6]=arr[i-1][4]+arr[i-1][7];
        arr[i][7]=arr[i-1][5]+arr[i-1][6];
        for(int j=0;j<8;j++)arr[i][j]%=1000000007;
    }
    cout<<arr[N][0];
}