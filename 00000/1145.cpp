#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[5];
    for(int i=0;i<5;i++)cin>>arr[i];
    for(int i=1;;i++){
        int count=0;
        for(int j=0;j<5;j++){
            if(i%arr[j]==0)count++;
        }
        if(count>=3){
            cout<<i;
            return 0;
        }
    }
}