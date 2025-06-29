#include<iostream>
using namespace std;
int arr[11];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)cin>>arr[i];
    cin>>N;
    int answer=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        answer+=arr[in];
    }
    cout<<answer;
}