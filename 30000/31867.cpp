#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str>>str;
    int e,o;
    e=o=0;
    for(auto c:str){
        if((c-'0')%2)o++;
        else e++;
    }
    if(o<e)cout<<0;
    else if(o>e)cout<<1;
    else cout<<-1;
}