#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,K;
    cin>>N>>M>>K;
    cout<<K/M<<" "<<K%M;
}