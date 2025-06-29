#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double A1,P1,R1,P2;
    cin>>A1>>P1>>R1>>P2;
    if(A1/P1>R1*R1*3.14159265358979323846264338327950288419/P2)cout<<"Slice of pizza";
    else cout<<"Whole pizza";
}