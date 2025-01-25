#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    a+=b;
    a=(a-1)%4+1;
    int c,d;
    cin>>c>>d;
    a--;
    a+=c+d;
    a=(a-1)%4+1;
    cout<<a;
}