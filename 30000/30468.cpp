#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    int answer=0;
    a+=b+c+d;
    cout<<max(0,n*4-a);
}