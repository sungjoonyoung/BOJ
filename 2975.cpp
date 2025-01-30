#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b;
        char c;
        cin>>a>>c>>b;
        if(a==0 and b==0)break;
        if(c=='D' and a+b>=-200)cout<<a+b;
        else if(c=='W' and a-b>=-200)cout<<a-b;
        else cout<<"Not allowed";
        cout<<"\n";
    }
}