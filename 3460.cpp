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
        int count=0;
        while(in){
            if(in&1)cout<<count<<" ";
            in=in>>1;
            count++;
        }
        cout<<"\n";
    }
}