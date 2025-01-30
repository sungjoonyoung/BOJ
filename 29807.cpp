#include<iostream>
using namespace std;
int arr[5];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    long long answer=0;
    if(arr[0]>arr[2])answer+=(arr[0]-arr[2])*508;
    else answer+=(arr[2]-arr[0])*108;

    if(arr[1]>arr[3])answer+=(arr[1]-arr[3])*212;
    else answer+=(arr[3]-arr[1])*305;

    if(arr[4])answer+=arr[4]*707;

    cout<<answer*4763;
}