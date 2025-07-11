#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    cin>>str;
    if(str.find("gori")!=string::npos)cout<<"YES";
    else cout<<"NO";
}