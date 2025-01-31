#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string str;
        getline(cin,str);
        cout<<str;
        if(str.back()!='.')cout<<".";
        cout<<"\n";
    }
}