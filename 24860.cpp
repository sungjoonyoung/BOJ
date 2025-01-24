#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    a*=b;
    long long c,d;
    cin>>c>>d;
    c*=d;
    a+=c;
    long long q,w,e;
    cin>>q>>w>>e;
    cout<<a*q*w*e;
}