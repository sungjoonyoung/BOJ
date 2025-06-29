#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='D' && str[i+1]=='2'){
            cout<<"D2";
            return 0;
        }
        if(str[i]=='d' && str[i+1]=='2'){
            cout<<"D2";
            return 0;
        }
    }
    cout<<"unrated";
}