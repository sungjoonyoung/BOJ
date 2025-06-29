#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,W;
    int T;
    cin>>T;
    while(T--){
        cin>>N>>M>>W;
        cout<<(W+N-1)%N+1;
        if((W+N-1)/N<10)cout<<0;
        cout<<(W+N-1)/N<<"\n";
    }
}