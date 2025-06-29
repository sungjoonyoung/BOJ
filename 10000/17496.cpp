#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    cout<<((A-1)/B)*C*D;
}