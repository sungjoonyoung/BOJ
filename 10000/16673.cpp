#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long c,k,p;
    cin>>c>>k>>p;
    //cout<<c*k+c*c*p;
    cout<<k*c*(c+1)/2+p*(c)*(c+1)*(c*2+1)/6;
}