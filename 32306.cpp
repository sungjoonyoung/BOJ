#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    a+=b*2+c*3;
    d+=e*2+f*3;
    if(a<d)cout<<2;
    else if(a>d)cout<<1;
    else cout<<0;
}