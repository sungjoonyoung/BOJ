#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str,table;
    cin>>str;
    cin.ignore();
    getline(cin,table);
    for(int i=0;i<str.size();i++){
        [&](){
            for(int j=0;j<table.size();j++){
                if(str[i]==table[j]){
                    cout<<(char)(str[i]-'A'+'a');
                    return;
                }
            }
        cout<<str[i];
        }();
    }
}