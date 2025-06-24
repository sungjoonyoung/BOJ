#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K;
    cin>>N>>K;
    while(K--){
        int in;
        cin>>in;
        in=(in+1)/2;
        N-=in;
    }
    if(N<=0)cout<<"YES";
    else cout<<"NO";
}