#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long N,M;
    cin>>N>>M;
    cout<<(N+M)*(N-M);
}