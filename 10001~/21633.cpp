#include<iostream>
#include<stdio.h>
using namespace std;
int main(void){
    double N;
    cin>>N;
    N/=100;
    N+=25;
    if(N<100)cout<<"100.00";
    else if(2000<N)cout<<"2000.00";
    else printf("%.2lf",N);
}