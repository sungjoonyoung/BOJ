#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L,T;
    L=T=0;
    for(int i=0;i<9;i++){
        string str;
        cin>>str;
        if(str=="Lion")L++;
        else T++;
    }
    if(L>T)cout<<"Lion";
    else cout<<"Tiger";
}