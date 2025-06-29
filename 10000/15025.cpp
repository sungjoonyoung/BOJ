#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    cin>>A>>B;
    if(A==B and A!=0)cout<<"Even "<<A*2;
    else if(A==B)cout<<"Not a moose";
    else cout<<"Odd "<<max(A,B)*2;
}