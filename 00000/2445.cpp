#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=0;j<i;j++)cout<<"*";
        if(i!=N)for(int j=0;j<=N-i-1;j++)cout<<" ";
        if(i!=N)for(int j=0;j<=N-i-1;j++)cout<<" ";
        for(int j=0;j<i;j++)cout<<"*";
        cout<<"\n";
    }
    for(int i=N-1;i>0;i--){
        for(int j=0;j<i;j++)cout<<"*";
        if(i!=N)for(int j=0;j<=N-i-1;j++)cout<<" ";
        if(i!=N)for(int j=0;j<=N-i-1;j++)cout<<" ";
        for(int j=0;j<i;j++)cout<<"*";
        cout<<"\n";
    }
}
