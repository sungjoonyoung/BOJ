#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long N;
    cin>>N;
    cout<<N*(N+1)*7/2*4 + N*(N+1)*7/2 ;
}