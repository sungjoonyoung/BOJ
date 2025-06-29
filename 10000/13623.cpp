#include<iostream>
using namespace std;
int arr[3];
char chararr[3]={'A','B','C'};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int one=0;
    int zer=0;
    for(int i=0;i<3;i++){
        int in;
        cin>>in;
        arr[i]=in;
        if(in)one++;
        else zer++;
    }
    
    if(one==1){for(int i=0;i<3;i++)if(arr[i]==1)cout<<chararr[i];}
    else if(zer==1){for(int i=0;i<3;i++)if(arr[i]==0)cout<<chararr[i];}
    else cout<<"*";
}