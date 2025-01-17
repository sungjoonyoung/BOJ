#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double N;
    cin>>N;
    N/=N*N;
    N/=1.609344;
    N*=378.5411784;
    
    cout<<fixed;
    cout.precision(6);
    cout<<N;
}