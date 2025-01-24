#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int S,N;
    cin>>S>>N;
    while(N--){
        int in;
        cin>>in;
        in*=100;
        in/=S;
        if(in<=4)cout<<1;
        else if(in<=11)cout<<2;
        else if(in<=23)cout<<3;
        else if(in<=40)cout<<4;
        else if(in<=60)cout<<5;
        else if(in<=77)cout<<6;
        else if(in<=89)cout<<7;
        else if(in<=96)cout<<8;
        else if(in<=100)cout<<9;
        cout<<" ";
    }
}