#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a>=b)cout<<b;
    else cout<<a+1;
}