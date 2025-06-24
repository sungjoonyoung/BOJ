#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    char before=-1;
    for(auto c:str){
        if(c!=before)cout<<c;
        before=c;
    }
}