#include<iostream>
using namespace std;
int arr[305];
int W[305];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<305;i++){
        arr[i]=arr[i-1]+i;
        if(i!=1)W[i-1]=(i-1)*arr[i]+W[i-2];
    }
    while(T--){
        int in;
        cin>>in;
        cout<<W[in]<<"\n";
    }
}