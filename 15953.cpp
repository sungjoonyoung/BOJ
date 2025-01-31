#include<iostream>
using namespace std;
int arr[7]={0,500,300,200,50,30,10};
int arrr[7]={0,512,256,128,64,32};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        if(a==0)a=0;
        else if(a<=1)a=1;
        else if(a<=3)a=2;
        else if(a<=6)a=3;
        else if(a<=10)a=4;
        else if(a<=15)a=5;
        else if(a<=21)a=6;
        else a=0;
        if(b==0)b=0;
        else if(b<=1)b=1;
        else if(b<=3)b=2;
        else if(b<=7)b=3;
        else if(b<=15)b=4;
        else if(b<=31)b=5;
        else b=0;
        if(arr[a]+arrr[b]==0)cout<<0<<"\n";
        else cout<<arr[a]+arrr[b]<<"0000\n";
    }
}