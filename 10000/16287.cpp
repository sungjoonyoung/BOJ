#include<iostream>
using namespace std;
int arr[5000];
int r[400'001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int W,N;
    cin>>W>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    for(int i=0;i<N;i++)for(int j=i+1;j<N;j++)r[arr[i]+arr[j]]++;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++)r[arr[i]+arr[j]]--;
        for(int j=0;j<i;j++){
            if(0<=W-arr[i]-arr[j] and W-arr[i]-arr[j]<400'001){
                if(r[W-arr[i]-arr[j]]){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}