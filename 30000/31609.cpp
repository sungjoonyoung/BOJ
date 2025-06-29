#include<iostream>
using namespace std;
int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int in;
        cin>>in;
        arr[in]++;
    }
    for(int i=0;i<10;i++){
        if(arr[i])cout<<i<<"\n";
    }
}