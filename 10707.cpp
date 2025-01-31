#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D,P;
    cin>>A>>B>>C>>D>>P;
    int a=A*P;
    int b=0;
    if(P<=C)b=B;
    else{
        b=B+(P-C)*D;
    }
    cout<<min(a,b);
}