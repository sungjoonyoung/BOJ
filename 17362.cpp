#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    N%=8;
    if(N==0)N=8;
    if(N<=5)cout<<N;
    else cout<<10-N;
}