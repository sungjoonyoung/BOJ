#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N%6==3){
        for(int i=4;i<=N;i+=2)cout<<i<<"\n";
        cout<<"2\n";
        for(int i=5;i<=N;i+=2)cout<<i<<"\n";
        cout<<"1\n3";
    }
    else if(N%6==2){
        for(int i=2;i<=N;i+=2)cout<<i<<"\n";
        cout<<"3\n1\n";
        for(int i=7;i<=N;i+=2)cout<<i<<"\n";
        cout<<"5";
    }
    else{
        for(int i=2;i<=N;i+=2)cout<<i<<"\n";
        for(int i=1;i<=N;i+=2)cout<<i<<"\n";
    }
}