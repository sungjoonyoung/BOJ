#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    cin>>A>>B;
    A+=B*7;
    cout<<(A<=30);
}