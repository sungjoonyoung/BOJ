#include<iostream>
using namespace std;
int arr[5];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxnum=0;
    for(int i=0;i<5;i++)for(int j=0;j<4;j++){
        int in;
        cin>>in;
        arr[i]+=in;
        maxnum=max(arr[i],maxnum);
    }
    for(int i=0;i<5;i++)if(arr[i]==maxnum)cout<<i+1<<" "<<maxnum;
}