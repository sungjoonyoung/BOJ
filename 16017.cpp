#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if((A==8 or A==9) and (D==8 or D==9) and (B==C))cout<<"ignore";
    else cout<<"answer";
}