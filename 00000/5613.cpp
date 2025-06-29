#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(1){
        int in;
        char op;
        cin>>op;
        if(op=='=')break;
        cin>>in;
        if(op=='+')n+=in;
        if(op=='-')n-=in;
        if(op=='/')n/=in;
        if(op=='*')n*=in;
    }
    cout<<n;
}