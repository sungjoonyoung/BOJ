#include<iostream>
using namespace std;
int arr[1000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int N;
        cin>>N;
        if(N==0)break;
        int maxnum=0;
        for(int i=0;i<N;i++)cin>>arr[i];
        for(int i=0;i<N-2;i++)maxnum=max(maxnum,arr[i]+arr[i+1]+arr[i+2]);
        cout<<maxnum<<"\n";
    }

}