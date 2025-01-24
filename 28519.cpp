#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    if(N==M)cout<<N*2;
    else cout<<min(N,M)*2+1;
}