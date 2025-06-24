#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int f=0;f<N;f++){
        for(int i=N-f-1;i>0;i--)cout<<" ";
        cout<<"*";
        for(int i=0;i<f*2-1;i++)cout<<" ";
        if(f!=0)cout<<"*";
        cout<<"\n";
    }
    
}