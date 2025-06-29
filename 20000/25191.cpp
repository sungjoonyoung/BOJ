#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c;
    cin>>c;
    int a,b;
    cin>>a>>b;
    a=a/2+b;
    cout<<min(a,c);
}