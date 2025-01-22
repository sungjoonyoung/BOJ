#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double N;
    cin>>N;
    N/=3.1415926535897932384626433;
    N=sqrt(N);
    cout.precision(10);
    cout<<2*N*3.1415926535897932384626433;
}