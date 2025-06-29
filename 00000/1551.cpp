#include<iostream>
using namespace std;
int arr[20];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        char c;
        if(i!=N)cin>>c;
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<N-i;j++){
            arr[j]=arr[j+1]-arr[j];
        }
    }
    for(int i=0;i<N-K;i++){
        cout<<arr[i];
        if(i!=N-K-1)cout<<",";
    }
}