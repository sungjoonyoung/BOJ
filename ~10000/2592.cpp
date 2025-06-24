#include<iostream>
using namespace std;
int arr[1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum=0;
    for(int i=0;i<10;i++){
        int in;
        cin>>in;
        sum+=in;
        arr[in]++;
    }
    int maxnum=0;
    for(int i=0;i<1001;i++)maxnum=max(maxnum,arr[i]);
    cout<<sum/10<<"\n";
    for(int i=0;i<1001;i++)if(arr[i]==maxnum){
        cout<<i;
        return 0;
    }
}