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

        if(in==1){
            cout<<"#\n\n";
            continue;
        }
        else if(in==2){
            cout<<"##\n";
            cout<<"##\n";
            cout<<"\n";
            continue;
        }


        for(int i=0;i<in;i++)cout<<"#";
        cout<<"\n";
        for(int j=0;j<in-2;j++){cout<<"#";
        for(int i=0;i<in-2;i++)cout<<"J";
        cout<<"#";
        cout<<"\n";}
        for(int i=0;i<in;i++)cout<<"#";
        cout<<"\n";
        cout<<"\n";
    }
}