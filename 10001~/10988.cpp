#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(int i=0;i<str.size()/2;i++){
        if(str[i]!=str[str.size()-1-i]){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
}