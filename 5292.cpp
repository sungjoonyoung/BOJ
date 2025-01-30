#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    for(int i=1;i<=in;i++){
        if(i%3==0 or i%5==0){
            if(i%15==0)cout<<"DeadMan";
            else if(i%3==0)cout<<"Dead";
            else if(i%5==0)cout<<"Man";
            cout<<"\n";
        }
        else cout<<i<<" ";
    }
}