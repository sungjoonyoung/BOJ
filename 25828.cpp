#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int g,p,t;
    cin>>g>>p>>t;
    int answer=0;
    answer=g+p*t;
    if(answer<g*p)cout<<2;
    else if(answer>g*p)cout<<1;
    else cout<<0;
}