#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    a*=7;
    b*=13;
    if(a<b)cout<<"Petra";
    else if(a>b)cout<<"Axel";
    else cout<<"lika";
}