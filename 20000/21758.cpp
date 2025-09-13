#include<iostream>
using namespace std;
int suffix[2][100'002];
int preffix[2][100'002];
int arr[100'002];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)cin>>arr[i];
    for(int i=0;i<=N;i++){
        suffix[1][i]=arr[i]+suffix[1][i-1];
        suffix[0][i]=suffix[1][i-1];
    }
    for(int i=N;i>=1;i--){
        preffix[1][i]=arr[i]+preffix[1][i+1];
        preffix[0][i]=preffix[1][i+1];
    }
    int maxnum=-1;
    for(int i=1;i<=N;i++){
        //lr
        if(1<i and i<N)maxnum=max(maxnum,suffix[1][i] + preffix[1][i] -arr[1]-arr[N]);
    }
    //rr
    int tmp=preffix[1][1]-arr[N];
    for(int i=1;i<=N;i++){
        if(1<i and i<N)maxnum=max(maxnum,tmp-arr[i]+suffix[1][i-1]);
    }
    //ll
    tmp=suffix[1][N]-arr[1];
    for(int i=1;i<=N;i++){
        if(1<i and i<N)maxnum=max(maxnum,tmp-arr[i]+preffix[1][i+1]);
    }
    cout<<maxnum;
}