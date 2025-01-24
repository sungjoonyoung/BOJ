#include<iostream>
using namespace std;
int arr[30];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,m;
    cin>>N>>m;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<N;i++){
        cout<<m*arr[i]/sum<<"\n";
    }
}