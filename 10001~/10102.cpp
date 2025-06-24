#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str>>str;
    int a,b;
    a=b=0;
    for(auto c:str){
        if(c=='A')a++;
        else b++;
    }
    if(a>b)cout<<"A";
    else if(a<b)cout<<"B";
    else cout<<"Tie";
}