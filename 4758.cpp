#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        double v,w,s;
        cin>>v>>w>>s;
        int key=1;
        if(!(v||w||s))break;
        if(v<=4.5 and 150<=w and 200<=s){
            cout<<"Wide Receiver ";
            key=0;
        }
        if(v<=6.0 and 300<=w and 500<=s){
            cout<<"Lineman ";
            key=0;
        }
        if(v<=5.0 and 200<=w and 300<=s){
            cout<<"Quarterback ";
            key=0;
        }
        if(key)cout<<"No positions";
        cout<<"\n";
    }
}