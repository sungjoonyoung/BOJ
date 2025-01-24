#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D,E,F;
    cin>>A>>B>>C>>D>>E>>F;
    cout<<max(D-A,0)+max(E-B,0)+max(F-C,0);
}