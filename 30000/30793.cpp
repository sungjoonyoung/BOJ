#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double a,b;
    cin>>a>>b;
    if(a<0.2*b)cout<<"weak";
    else if(a<0.4*b)cout<<"normal";
    else if(a<0.6*b)cout<<"strong";
    else cout<<"very strong";
}