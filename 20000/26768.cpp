#include<iostream>
#include<string>
using namespace std;
string str;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>str;
    for(auto c:str){
        if(c=='a')cout<<'4';
        else if(c=='e')cout<<'3';
        else if(c=='i')cout<<'1';
        else if(c=='o')cout<<'0';
        else if(c=='s')cout<<'5';
        else cout<<c;
    }
}