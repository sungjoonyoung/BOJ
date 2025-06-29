#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    cout<<min({A*2+C*2,A*4+B*2,C*4+B*2});
}