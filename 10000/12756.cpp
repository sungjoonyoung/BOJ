#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    d=(d-1)/a+1;
    b=(b-1)/c+1;
    if(d<b)cout<<"PLAYER A";
    else if(d>b)cout<<"PLAYER B";
    else cout<<"DRAW";
}