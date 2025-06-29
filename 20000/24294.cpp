#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(c,a)*2+b+b+d+d+4;
}