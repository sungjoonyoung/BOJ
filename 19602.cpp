#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    A=A+B*2+C*3;
    if(A>=10)cout<<"happy";
    else cout<<"sad";
}