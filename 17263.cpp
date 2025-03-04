#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int maxnum=-1;
    while(N--){
        int in;
        cin>>in;
        maxnum=max(maxnum,in);
    }
    cout<<maxnum;
}