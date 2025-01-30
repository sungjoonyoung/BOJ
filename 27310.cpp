#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int c,u;
    c=u=0;
    for(auto a:str){
        if(a==':')c++;
        else if(a=='_')u++;
    }
    cout<<str.size()+c+u*5;
}