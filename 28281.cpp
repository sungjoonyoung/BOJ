#include<iostream>
using namespace std;
long long arr[100001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        arr[i]+=in;
        arr[i+1]+=in;
    }
    long long maxnum=2'000'000*100;
    for(int i=1;i<N;i++)maxnum=min(maxnum,arr[i]);
    cout<<M*maxnum;
}