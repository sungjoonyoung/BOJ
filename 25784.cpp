#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c)cout<<1;
    else if(a+c==b)cout<<1;
    else if(b+c==a)cout<<1;
    else if(a*b==c)cout<<2;
    else if(a*c==b)cout<<2;
    else if(b*c==a)cout<<2;
    else cout<<3;
}