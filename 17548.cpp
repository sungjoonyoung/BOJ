#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(auto c:str){
        if(c=='e')cout<<c;
        cout<<c;
    }
}