#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,H;
    cin>>N>>H;
    int count=0;
    while(N--){
        int in;
        cin>>in;
        if(in<=H)count++;
    }
    cout<<count;
}