#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        cout<<"You get "<<a/b<<" piece(s) and your dad gets ";
        cout<<a%b<<" piece(s).\n";
    }
}