#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a==1 or b==1)cout<<max(a,b);
    else cout<<a+a+b+b-4;
}