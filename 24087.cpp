#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int S,A,B;
    cin>>S>>A>>B;
    if(A>=S)cout<<250;
    else cout<<250+((S-A+B-1)/B)*100;
}