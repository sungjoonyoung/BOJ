#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int P,Q,A,B;
    cin>>P>>Q>>A>>B;
    if(Q<=P)cout<<A*Q;
    else cout<<A*P+B*(Q-P);
}