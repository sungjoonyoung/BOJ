#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b;
        cin>>a>>b;
        if(a==b and a==0)break;
        a-=b;
        if(a==1)cout<<"0 0";
        else if(a%2==0)cout<<a/2<<" 0";
        else{
            a-=3;
            cout<<a/2<<" 1";
        }
        cout<<"\n";
    }
}