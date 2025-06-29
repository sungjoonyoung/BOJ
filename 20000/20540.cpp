#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    if(str[0]=='E')cout<<"I";
    else cout<<"E";
    if(str[1]=='N')cout<<"S";
    else cout<<"N";
    if(str[2]=='T')cout<<"F";
    else cout<<"T";
    if(str[3]=='P')cout<<"J";
    else cout<<"P";
}