#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    A=A*3+B;
    C=C*3+D;
    if(A>C)cout<<"1 "<<A-C;
    else if(A<C)cout<<"2 "<<C-A;
    else cout<<"NO SCORE";
}