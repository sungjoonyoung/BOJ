#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long aa,bb,cc,dd;
    cin>>aa>>bb>>cc>>dd;
    __int128_t a,b,c,d;
    a=aa;
    b=bb;
    c=cc;
    d=dd;
    if(a*b>c*d)cout<<"M";
    else if(a*b<c*d)cout<<"P";
    else cout<<"E";
}