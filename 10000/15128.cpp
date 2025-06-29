#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a*=c;
    b*=d*2;
    cout<<(a%b==0);
}