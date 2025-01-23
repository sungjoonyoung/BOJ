#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    if(str[0]==str[1] and str[1]==str[2] and str[0]=='5')cout<<"YES";
    else cout<<"NO";
}