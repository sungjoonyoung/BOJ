#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    b+=7;
    if(a>=8)cout<<a-7;
    else cout<<b;
}