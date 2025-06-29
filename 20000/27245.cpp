#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,H;
    cin>>N>>M>>H;
    if(max(N,M)<=min(N,M)*2 and min(N,M)>=H*2)cout<<"good";
    else cout<<"bad";
}