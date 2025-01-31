#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        if(str[str.size()/2]==str[str.size()/2-1])cout<<"Do-it\n";
        else cout<<"Do-it-Not\n";
    }
}