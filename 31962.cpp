#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,T;
    cin>>N>>T;
    int maxnum=-1;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        if(a+b<=T)maxnum=max(maxnum,a);
    }
    cout<<maxnum;
}