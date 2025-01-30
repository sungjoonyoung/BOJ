#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long in;
    cin>>in;
    if(-32768<=in and in<=32767)cout<<"short";
    else if(-pow(2,31)<=in and in<=pow(2,31)-1)cout<<"int";
    else cout<<"long long";
}