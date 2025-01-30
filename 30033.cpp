#include<iostream>
using namespace std;
int arr[1000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    for(int i=0;i<N;i++)cin>>arr[i];
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        if(in>=arr[i])answer++;
    }
    cout<<answer;
}