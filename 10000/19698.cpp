#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,W,H,L;
    cin>>N>>W>>H>>L;
    W=(W/L)*(H/L);
    cout<<min(W,N);
}