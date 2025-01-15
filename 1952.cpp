#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    if(N>M)cout<<(M-1)*2+1;
    else cout<<(N-1)*2;
}