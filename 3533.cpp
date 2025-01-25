#include<iostream>
using namespace std;
bool arr[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<10;i++)cin>>arr[i];
    bool answer=(arr[0]||arr[1]);
    for(int i=0;i<9;i++)for(int j=i+1;j<10;j++){
        if(i!=0 or j!=1)answer=(answer^(arr[i]||arr[j]));
    }
    for(int i=0;i<8;i++)for(int j=i+1;j<9;j++){
        for(int k=j+1;k<10;k++)answer=(answer^(arr[i]||arr[j]||arr[k]));
    }
    cout<<answer;
}