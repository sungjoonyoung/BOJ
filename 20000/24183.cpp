#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double a,b,c;
    cin>>a>>b>>c;
    a*=2*229*324*0.000001;
    b*=2*297*420*0.000001;
    c*=210*297*0.000001;
    cout.precision(10);
    cout<<fixed;
    cout<<a+b+c;
}