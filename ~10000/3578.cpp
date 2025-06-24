#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N==0)cout<<1;
    else if(N==1)cout<<0;
    else{
        if(N%2)cout<<4;
        for(int i=0;i<N/2;i++)cout<<8;
    }
}