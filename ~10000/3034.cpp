#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,W,H;
    cin>>N>>W>>H;
    while(N--){
        int in;
        cin>>in;
        if(in*in<=W*W+H*H)cout<<"DA\n";
        else cout<<"NE\n";
    }
}