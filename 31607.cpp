#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a+b+c-max(a,max(b,c))==max(a,max(b,c)));
}