#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double N;
    cin>>N;
    long double answer=0;
    cout<<fixed;
    cout.precision(10);
    while(N--){
        long double in;
        cin>>in;
        answer+=in*in*in;
    }
    cout<<cbrt(answer);
}