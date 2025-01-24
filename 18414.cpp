#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X,L,R;
    cin>>X>>L>>R;
    if(X<L)cout<<L;
    else if(R<X)cout<<R;
    else cout<<X;
}