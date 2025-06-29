#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    string str;
    cin>>str;
    for(int i=0;i<str.size()/2;i++){
        if(str[i]=='?'&&str[str.size()-1-i]=='?'){
            str[i]='a';
            str[str.size()-1-i]='a';
        }
        else if(str[i]=='?')str[i]=str[str.size()-1-i];
        else if(str[str.size()-1-i]=='?')str[str.size()-1-i]=str[i];
    }
    if(str.size()%2==1 && str[str.size()/2]=='?')str[str.size()/2]='a';
    cout<<str;
}