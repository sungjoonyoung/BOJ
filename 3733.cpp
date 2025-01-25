#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b;
        cin>>a;
        if(cin.eof())break;
        cin>>b;
        cout<<b/(a+1)<<"\n";
    }
}