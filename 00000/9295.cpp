#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<a+b<<"\n";
    }
}