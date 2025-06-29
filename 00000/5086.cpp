#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b;
        cin>>a>>b;
        if(!(a||b))break;
        if(b%a==0)cout<<"factor";
        else if(a%b==0)cout<<"multiple";
        else cout<<"neither";
        cout<<"\n";
    }
}