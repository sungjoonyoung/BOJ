#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    cin>>str;
    char c=str[0];
    for(int i=0;i<str.size();i++){
        if(c!=str[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}