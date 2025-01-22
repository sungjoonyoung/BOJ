#include<iostream>
using namespace std;
int arr[100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int N;
        cin>>N;
        if(N==0)break;
        for(int i=0;i<N;i++)cin>>arr[i];
        for(int i=N-1;i>=0;i--)cout<<arr[i]<<"\n";
        cout<<"0\n";
    }
}