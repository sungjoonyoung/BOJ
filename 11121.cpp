#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        if(a==b)cout<<"OK\n";
        else cout<<"ERROR\n";
    }
}