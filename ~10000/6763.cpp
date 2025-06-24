#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    M-=N;
    if(M<=0)cout<<"Congratulations, you are within the speed limit!";
    else if(M<21)cout<<"You are speeding and your fine is $100.";
    else if(M<31)cout<<"You are speeding and your fine is $270.";
    else cout<<"You are speeding and your fine is $500.";
}