#include<iostream>
using namespace std;
int arr[2];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<2;i++)for(int j=0;j<4;j++){
        int in;
        cin>>in;
        arr[i]+=in;
    }
    cout<<max(arr[0],arr[1]);
}