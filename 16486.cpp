#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double d,r;
    cin>>d>>r;
    cout<<fixed;
    cout.precision(10);
    cout<<d*2+2*r*3.14159265358979323;
}