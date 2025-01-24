#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int j=0;j<N;j++){
        for(int i=0;i<N*5;i++)cout<<"@";
        cout<<"\n";
    }
    for(int i=0;i<N*3;i++){
        for(int j=0;j<N;j++)cout<<"@";
        for(int j=0;j<N*3;j++)cout<<" ";
        for(int j=0;j<N;j++)cout<<"@";
        cout<<"\n";
    }
    for(int j=0;j<N;j++){
        for(int i=0;i<N*5;i++)cout<<"@";
        cout<<"\n";
    }
}