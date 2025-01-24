#include<iostream>
using namespace std;
int arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<5;i++){
        int in;
        cin>>in;
        if(arr[in])arr[in]--;
        else arr[in]++;
    }
    for(int i=0;i<10;i++)if(arr[i])cout<<i;
}