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
        cout<<in/25;
        cout<<" ";
        if(in/25*25)in%=in/25*25;
        cout<<in/10;
        cout<<" ";
        if(in/10*10)in%=in/10*10;
        cout<<in/5;
        cout<<" ";
        if(in/5*5)in%=in/5*5;
        cout<<in;
        cout<<"\n";
    }
}