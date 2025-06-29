#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A;
    cin>>A;
    if(A%10)cout<<A/10+A%10;
    else cout<<A/100+A%100;
}