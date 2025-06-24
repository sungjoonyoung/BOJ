#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int b,a;
    b=a=0;
    for(auto ch:str){
        if(ch=='B')b++;
        else a++;
    }
    cout<<a<<" : "<<b;
}