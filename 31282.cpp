#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,K;
    cin>>N>>M>>K;
    //N+Mx<=Kx
    cout<<(N-1)/(K-M)+1;
}