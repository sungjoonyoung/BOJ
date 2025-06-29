#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        if((str.back()-'0')%2)cout<<"odd\n";
        else cout<<"even\n";
    }
}