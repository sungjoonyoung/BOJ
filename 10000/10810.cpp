#include<iostream>
using namespace std;
int arr[100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    while(M--){
        int a,b,w;
        cin>>a>>b>>w;
        for(int i=a-1;i<b;i++)arr[i]=w;
    }
    for(int i=0;i<N;i++)cout<<arr[i]<<" ";
}