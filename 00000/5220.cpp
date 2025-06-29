#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in,o;
        cin>>in>>o;
        int count=0;
        while(in){
            if(in&1)count++;
            in=(in>>1);
        }
        if(count%2==o)cout<<"Valid\n";
        else cout<<"Corrupt\n";
    }
}