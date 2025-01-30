#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str>>str;
    for(auto c:str){
        if(c=='J')cout<<"O";
        if(c=='O')cout<<"I";
        if(c=='I')cout<<"J";
    }
}