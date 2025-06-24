#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double N;
    cin>>N;
    N=sqrt(N);
    cout<<fixed;
    cout.precision(10);
    cout<<N*4;
}