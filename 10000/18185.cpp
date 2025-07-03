#include<iostream>
using namespace std;
int arr[10005];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    long long answer=0;
    int a,b,c;
    a=3;
    b=5;
    c=7;
    for(int i=0;i<N;i++){
        if(arr[i+1]>arr[i+2]){
            int tmp;
            tmp=min(arr[i],arr[i+1]-arr[i+2]);
            answer+=tmp*b;
            for(int j=i;j<i+2;j++)arr[j]-=tmp;

            tmp=min(arr[i],min(arr[i+1],arr[i+2]));
            answer+=tmp*c;
            for(int j=i;j<i+3;j++)arr[j]-=tmp;

            tmp=arr[i];
            answer+=tmp*a;
            for(int j=i;j<i+1;j++)arr[j]-=tmp;
        }
        else{
            int tmp;
            tmp=min(arr[i],min(arr[i+1],arr[i+2]));
            answer+=tmp*c;
            for(int j=i;j<i+3;j++)arr[j]-=tmp;

            tmp=min(arr[i],arr[i+1]);
            answer+=tmp*b;
            for(int j=i;j<i+2;j++)arr[j]-=tmp;

            tmp=arr[i];
            answer+=tmp*a;
            for(int j=i;j<i+1;j++)arr[j]-=tmp;
        }
        // for(int k=0;k<N;k++)cout<<arr[k]<<" ";
        // cout<<"\n";
        // cout<<answer<<"\n";
    }
    cout<<answer;
}