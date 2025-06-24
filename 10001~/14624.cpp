#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N%2==0){
        cout<<"I LOVE CBNU";
        return 0;
    }
    for(int i=0;i<N;i++)cout<<"*";
    cout<<"\n";
    for(int i=0;i<N/2+1;i++){
        if(i!=N-1)for(int j=0;j<N/2-i;j++)cout<<" ";
        cout<<"*";
        for(int j=0;j<i*2-1;j++)cout<<" ";
        if(i!=0)cout<<"*";
        cout<<"\n";
    }
}