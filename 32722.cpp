#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    if((A==1 or A==3)and(B==6 or B==8)and(C==2 or C==5))cout<<"JAH";
    else cout<<"EI";
}