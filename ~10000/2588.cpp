#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<a*(b%10)<<"\n";
    cout<<a*(b/10%10)<<"\n";
    cout<<a*(b/100%10)<<"\n";
    cout<<a*b;
}