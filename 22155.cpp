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
        if(a<=1&&b<=2)cout<<"Yes\n";
        else if(b<=1&&a<=2)cout<<"Yes\n";
        else cout<<"No\n";
    }
}