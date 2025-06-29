#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,A,B,C,D;
    cin>>N>>A>>B>>C>>D;
    A=N/A+(N%A?1:0);
    C=N/C+(N%C?1:0);
    cout<<min(A*B,C*D);
}