#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int one=0;
    int two=0;
    for(int i=0;i<3;i++){
        int in;
        cin>>in;
        if(in==1)one++;
        else two++;
    }
    if(one>two)cout<<1;
    else cout<<2;
}