#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    int a,b,c;
    a=b=c=0;
    a=in/300;
    in%=300;
    b=in/60;
    in%=60;
    c=in/10;
    in%=10;
    if(in)cout<<-1;
    else cout<<a<<" "<<b<<" "<<c;
}