#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a%2==0||b%2==0)cout<<0;
    else cout<<min(a,b);
}