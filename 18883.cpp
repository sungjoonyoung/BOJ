#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=1;i<=N*M;i++){
        cout<<i;
        if(i%M==0)cout<<"\n";
        else cout<<" ";
    }
}