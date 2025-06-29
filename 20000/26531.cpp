#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    char ch;
    cin>>a>>ch>>b>>ch>>c;
    if(a+b==c)cout<<"YES";
    else cout<<"NO";
}