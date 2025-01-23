#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K,D,A;
    char C;
    cin>>K>>C>>D>>C>>A;
    if(K+A<D or D==0)cout<<"hasu";
    else cout<<"gosu";
}