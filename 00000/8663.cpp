#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>M>>N;
    int count=0;
    // if(M<=N){
    //     cout<<1;
    //     return 0;
    // }
    while(N!=1 && 0<M){
        count++;
        M-=N;
        N/=2;
    }

    cout<<count+max(M,0);
}