#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(int i=0;i<str.size();){
        cout<<str[i];
        i+=str[i]-'A'+1;
    }
}