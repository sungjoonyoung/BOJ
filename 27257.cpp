#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int count=0;
    while(str.back()=='0')str.pop_back();
    for(int i=0;i<str.size();i++){
        if('0'==str[i])count++;
    }
    cout<<count;
}