#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double a,b;
    cin>>a>>b;
    long double m = (b-a)/400;
    cout<<1/(1+pow(10,m));
}