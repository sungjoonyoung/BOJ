#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    cout<<min(A+D,B+C);
}