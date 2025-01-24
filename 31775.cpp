#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l=0;
    int k=0;
    int p=0;
    for(int i=0;i<3;i++){
        string str;
        cin>>str;
        if(str[0]=='k')k++;
        if(str[0]=='l')l++;
        if(str[0]=='p')p++;
    }
    if(k*l*p)cout<<"GLOBAL";
    else cout<<"PONIX";
}