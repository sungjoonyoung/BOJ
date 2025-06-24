#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int in;
        cin>>in;
        if(in==0)break;
        for(int i=1;i<=in;i++){
            for(int j=0;j<i;j++)cout<<"*";
            cout<<"\n";
        }
    }
}