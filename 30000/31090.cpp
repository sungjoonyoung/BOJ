#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        if((in+1)%(in%100)==0)cout<<"Good\n";
        else cout<<"Bye\n";
    }
}